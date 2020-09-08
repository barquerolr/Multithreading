// Lab5.cpp : Defines the entry point for the console application.
/**********************************************************************''
EGRE 531 Lab 5
Programmed by: Luis Barquero
Purpose: Program will use threads to simulate the stone game, which two people
		 Tom and Jerry will be picking stones from a basket. The person to pick 
		 the last stone loses.
************************************************************************/

#include<iostream>
#include<stdio.h>
#include<time.h>
#include<cstdlib>
#include<ctime>
#include<pthread.h>

using namespace std;

static int num;						//number of stones
static int mod;						//number mod 5. Used for determining Jerry's next move.
static int tom;						//Number of stones Tom will pick
static int jerry;					//Number of stones Jerry will pick

void *tomStones(void*);				 //Void function for creating thread for Tom
void *jerryStones(void*);			 //Void function for creating thread for Jerry

pthread_mutex_t mutextom;	         //Mutex for Tom
pthread_mutex_t mutexjerry;			 //Mutex for Jerry
pthread_cond_t count_threshold_cv;	 //Signal

void *tomStones(void *toms) 
{
	pthread_t jerrys;				//Instantiates Jerry's thread
	
	wait(signal);					//Waits for the signal to begin its turn
	
	srand(time(NULL));				//Random function
	num = 21 + rand() % 80;			//Num = number of stones, and this will determine the number of starting stones
	
	for(int i = 0; i < num; i++)	//Loop will acquire a random number of stones that Tom will pick, and will call Jerry's thread
	{			
		pthread_mutex_lock(&mutextom);	//Locks the thread to ensure Tom gets the correct number of stones, and there is no interference
		tom = 1 + rand() % 4;			//Calculates random number of stones for Tom to pick
		num = num - tom;				//This will subtract the number of stones Tom picked from the overall number of stones
		cout << "\nTom's picks up " << tom << " stones, " << num << " left" << endl;
		mod = num % 5;						//This is used to determine Jerry's course of action when picking the stones
		pthread_mutex_unlock(&mutextom);	//Once the calculations are complete, the mutex is unlocked, and the thread is free to go
		
		pthread_create(&jerrys, NULL, jerryStones, NULL);		//Creation of Jerry's thread
		pthread_join(jerrys, NULL);								//Jerry's thread joins
		pthread_exit(NULL);										//Tom's thread exits
	}
	
   pthread_exit(NULL);
}

/*
In order for Jerry to win, the following algorithm must be implemented:
	1) If the number of stones mod 5 - num % 5 - == 0, this means the Jerry must pick 4 stones.
	   For example, if there are 5 stones left, Jerry has to pick 4 because this leaves one stone left, thus forcing Tom to pick the last one.
	   
	2) If the number of stones mod 5 == 1, Jerry must pick (5 - T) stones, T being Tom's last number of stones picked.
	   For example, if there are 6 stones left and Tom picks 3 stones, Jerry will pick (5 - 3 = 2) stones, leaving only 1 stone left, forcing Tom to pick the last one
	   
	3) If the number of stones mod 5 == 2, Jerry must pick 1 stone. For example, if there are 7 stones left, Jerry must pick 1 stone, leaving 6 in total. This allows Jerry 
	   to win, because no matter what Tom picks, Jerry will be able to leave 1 stone left in the basket, forcing Tom to pick it.
	   
	4) If the number of stones mode 5 == 3, Jerry must pick 2 stones. For example, if there are 8 stones, Jerry must pick 2 stones, leaving 6 in total. Once again, this allows 
	   Jerry to win, because no matter what Tom picks, Jerry will always leave 1 stone left in the basket, thus forcing Tom to pick the last stone.

	5) If the number of stones mod 5 == 4, Jerry must pick 3 stones. For example, if there are 9 stones, Jerry must pick 3 stones, leaving 6 in total. This, once again, 
	   ensures Jerry's victory because no matter what Tom picks, Jerry will always leave 1 stone left, forcing Tom to pick it.
	   
	   The idea is to have Jerry pick an amount that will leave 1 + 5n stones left, so that Jerry can leave 1 stone in the end, thus winning the game.

*/

void *jerryStones(void *jerrys)
{	
	wait(signal);												//Waits for the signal to begin its turn
	
	if(mod == 0)												//If num % 5 = 0, Jerry must pick 4, so that there is only one stone left, forcing Tom to pick it
		{
			pthread_mutex_lock(&mutexjerry);					//Locks the mutex
			jerry = 4;											//Sets the number Tom can pick to 4
			num = num - jerry;									//Subtracts the number picked by Jerry from the number of stones.
			cout << "\nJerry's picks up " << jerry << " stones, " << num << " left" << endl;
			pthread_mutex_unlock(&mutexjerry);					//Unlocks the mutex
		}
		
		if(mod == 1)											//If num % 5 = 1, Jerry must pick ( 5 - T) where T is the number of stones Tom previously picked, 
																//so that there is only one stone left, thus forcing Tom to pick the last stone.
		{
			pthread_mutex_lock(&mutexjerry);					//Locks the mutex
			jerry = 5 - tom;									//Sets the number of stones Jerry can pick ( 5 - T), where T is the number of stones Tom previously picked
			num = num - jerry;									//Subtracts the number of stones Jerry picked from the overall total
			cout << "\nJerry's picks up " << jerry << " stones, " << num << " left" << endl;
			pthread_mutex_unlock(&mutexjerry);					//Unlocks the mutex
		}
		
		if(mod == 2)											//If num % 5 = 2, Jerry must pick 1, so the there is only one stone left, forcing Tom to pick it
		{
			pthread_mutex_lock(&mutexjerry);					//Locks the mutex
			jerry = 1;											//Sets the number of stones Jerry can pick to 1
			num = num - jerry;									//Subtracts the number of stones picked by Jerry from the overall total
			cout << "\nJerry's picks up " << jerry << " stones, " << num << " left" << endl;
			pthread_mutex_unlock(&mutexjerry);					//Unlocks the mutex
		}		
		
		if(mod == 3)											//If num % 5 = 3, Jerry must pick 2, so that there is only 1 stone left, forcing Tom to pick it
		{
			pthread_mutex_lock(&mutexjerry);					//Locks the mutex
			jerry = 2;											//Sets the number of stones Jerry picks to 2
			num = num - jerry;									//Subtracts the number of stones Jerry picked from the overall total
			cout << "\nJerry's picks up " << jerry << " stones, " << num << " left" << endl;
			pthread_mutex_unlock(&mutexjerry);					//Unlocks the mutex
		}
		
		if(mod == 4)											//If num % 5 == 4. Jerry must pick 3, so that there is only 1 stone left, forcing Tom to pick it
		{
			pthread_mutex_lock(&mutexjerry);					//Locks the mutex
			jerry = 3;											//Sets the number of stones Jerry must pick to 3
			num = num - jerry;									//Subtracts the number of stones picked by Jerry from the overall total
			cout << "\nJerry's picks up " << jerry << " stones, " << num << " left" << endl;	
			pthread_mutex_unlock(&mutexjerry);					// Unlocks the mutex
		}
	
	while(num >= 1)												//This while loop is used because the loop above only iterates to number 11 or 16
																//Therefore, this while loop will pick up and finish the game properly
	{
		
		if(num == 1)											//If the number of stones == 1, Tom picks the last stone and Jerry wins, thus ending the game
		{
			pthread_mutex_lock(&mutextom);						//Locks the mutex
			cout << "\nTom picks 1 stone, 0 left" << endl;
			cout << "\nJerry won" << endl;
			pthread_mutex_unlock(&mutextom);					//Unlocks the mutex
			exit(1);											//The program completes
		}
		
		else													//If the number of stones is not 0, the program will keep on subtracting stones until there is only 1 left
		{
			if(num % 5 == 1)									//If num % 5 == 1, Tom will go next, and Jerry will pick (5 - T) stones, where T is the number of stones
																//Tom previously picked, so that there is only 1 stone left, forcing Tom to pick it, making Jerry win
			{
				pthread_mutex_lock(&mutextom);					//Lock the mutex
				tom = 1 + rand() % 4;							//Tom picks a random amount of stones
				num = num - tom;								//Subtracts the number of stones Tom picked from the overall amount
				cout << "\nTom's picks up " << tom << " stones, " << num << " left" << endl;			
				pthread_mutex_unlock(&mutextom);				//Unlocks the mutex
				
				pthread_mutex_lock(&mutexjerry);				//Locks the mutex
				jerry = 5 - tom; 								//Sets the number of stones Jerry can pick to (5 - T)
				num = num - jerry;								//Subtracts the number of stones Jerry picked from the overall total
				cout << "\nJerry's picks up " << jerry << " stones, " << num << " left" << endl;
				pthread_mutex_unlock(&mutexjerry);				//Unlocks the mutex
			}
		}
	}
}

int main()
{	
	pthread_t toms;													//Instantiating thread clause for Tom
	pthread_create(&toms, NULL, tomStones, NULL);					//Creates the thread for Tom
	pthread_join(toms, NULL);										//Tom's thread joins
	
	pthread_attr_t attr;											//Initializes thread attributes, in this case signal.
	pthread_cond_init (&count_threshold_cv, NULL);					//Initializes thread condition, in this case for the signal to be broadcasted
	pthread_attr_init(&attr);										//Initializes thread attribute
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);	//Sets the detach state attribute of the thread attributes object referred to by attr to the value specified in detachstate.
	
	pthread_attr_destroy(&attr);									//Destroys attribute
	pthread_cond_destroy(&count_threshold_cv);						//Destroys condition variable
	pthread_mutex_destroy(&mutextom);								//Destroys Tom's Mutex
	pthread_mutex_destroy(&mutexjerry);								//Destroys Jerry's Mutex
	
	pthread_exit(NULL);												//Tom's thread exits
	return 0;
}