// egre531lab2_Barquero.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;


int main()
{
	char character = 0;
	char letter = 0;

	int a1[8] = { 0,0,1,0,1,0,0,0 };
	int a2[8] = { 1,0,0,0,0,0,1,0 };
	int a3[8] = { 1,0,1,0,1,0,1,0 };
	int a4[8] = { 1,0,0,0,0,0,1,0 };
	int a5[8] = { 1,0,0,0,0,0,1,0 };

	int b1[9] = { 1,0,1,0,1,0,1,0,0 };
	int b2[9] = { 1,0,0,0,0,0,0,1,0 };
	int b3[9] = { 1,0,1,0,1,0,1,0,0 };
	int b4[9] = { 1,0,0,0,0,0,0,1,0 };
	int b5[9] = { 1,0,1,0,1,0,1,0,0 };

	int c1[9] = { 0,1,0,1,0,1,0,1,0 };
	int c2[9] = { 1,0,0,0,0,0,0,0,0 };
	int c3[9] = { 1,0,0,0,0,0,0,0,0 };
	int c4[9] = { 1,0,0,0,0,0,0,0,0 };
	int c5[9] = { 0,0,1,0,1,0,1,0,0 };

	int d1[9] = { 1,0,1,0,1,0,0,0,0 };
	int d2[9] = { 1,0,0,0,0,0,0,1,0 };
	int d3[9] = { 1,0,0,0,0,0,0,1,0 };
	int d4[9] = { 1,0,0,0,0,0,0,1,0 };
	int d5[9] = { 1,0,1,0,1,0,0,0,0 };

	int e1[8] = { 1,0,1,0,1,0,1,0 };
	int e2[8] = { 1,0,0,0,0,0,0,0 };
	int e3[8] = { 1,0,1,0,1,0,1,0 };
	int e4[8] = { 1,0,0,0,0,0,0,0 };
	int e5[8] = { 1,0,1,0,1,0,1,0 };

	int f1[8] = { 1,0,1,0,1,0,1,0 };
	int f2[8] = { 1,0,0,0,0,0,0,0 };
	int f3[8] = { 1,0,1,0,1,0,1,0 };
	int f4[8] = { 1,0,0,0,0,0,0,0 };
	int f5[8] = { 1,0,0,0,0,0,0,0 };

	int g1[8] = { 0,0,1,0,1,0,1,0 };
	int g2[8] = { 1,0,0,0,0,0,0,0 };
	int g3[8] = { 1,0,1,0,1,0,1,0 };
	int g4[8] = { 1,0,0,0,0,0,1,0 };
	int g5[8] = { 0,0,1,0,1,0,1,0 };

	int h1[8] = { 1,0,0,0,0,0,1,0 };
	int h2[8] = { 1,0,0,0,0,0,1,0 };
	int h3[8] = { 1,0,1,0,1,0,1,0 };
	int h4[8] = { 1,0,0,0,0,0,1,0 };
	int h5[8] = { 1,0,0,0,0,0,1,0 };

	int i1[10] = { 1,0,1,0,1,0,1,0,1,0 };
	int i2[10] = { 0,0,0,0,1,0,0,0,0,0 };
	int i3[10] = { 0,0,0,0,1,0,0,0,0,0 };
	int i4[10] = { 0,0,0,0,1,0,0,0,0,0 };
	int i5[10] = { 1,0,1,0,1,0,1,0,1,0 };

	int j1[10] = { 1,0,1,0,1,0,1,0,1,0 };
	int j2[10] = { 0,0,0,0,1,0,0,0,0,0 };
	int j3[10] = { 0,0,0,0,1,0,0,0,0,0 };
	int j4[10] = { 0,0,0,0,1,0,0,0,0,0 };
	int j5[10] = { 1,0,1,0,1,0,0,0,0,0 };

	int k1[6] = { 1,0,0,0,1,0 };
	int k2[6] = { 1,0,1,0,0,0 };
	int k3[6] = { 1,0,0,0,0,0 };
	int k4[6] = { 1,0,1,0,0,0 };
	int k5[6] = { 1,0,0,0,1,0 };

	int l1[8] = { 1,0,0,0,0,0,0,0 };
	int l2[8] = { 1,0,0,0,0,0,0,0 };
	int l3[8] = { 1,0,0,0,0,0,0,0 };
	int l4[8] = { 1,0,0,0,0,0,0,0 };
	int l5[8] = { 1,0,1,0,1,0,1,0 };

	int m1[10] = { 1,0,0,0,0,0,0,0,1,0 };
	int m2[10] = { 1,0,1,0,0,0,1,0,1,0 };
	int m3[10] = { 1,0,0,0,1,0,0,0,1,0 };
	int m4[10] = { 1,0,0,0,0,0,0,0,1,0 };
	int m5[10] = { 1,0,0,0,0,0,0,0,1,0 };

	int n1[10] = { 1,0,0,0,0,0,0,0,1,0 };
	int n2[10] = { 1,0,1,0,0,0,0,0,1,0 };
	int n3[10] = { 1,0,0,0,1,0,0,0,1,0 };
	int n4[10] = { 1,0,0,0,0,0,1,0,1,0 };
	int n5[10] = { 1,0,0,0,0,0,0,0,1,0 };

	int o1[10] = { 0,0,1,0,1,0,1,0,0,0 };
	int o2[10] = { 1,0,0,0,0,0,0,0,1,0 };
	int o3[10] = { 1,0,0,0,0,0,0,0,1,0 };
	int o4[10] = { 1,0,0,0,0,0,0,0,1,0 };
	int o5[10] = { 0,0,1,0,1,0,1,0,0,0 };

	int p1[8] = { 1,0,1,0,1,0,0,0 };
	int p2[8] = { 1,0,0,0,0,0,1,0 };
	int p3[8] = { 1,0,1,0,1,0,0,0 };
	int p4[8] = { 1,0,0,0,0,0,0,0 };
	int p5[8] = { 1,0,0,0,0,0,0,0 };

	int q1[10] = { 0,0,1,0,1,0,1,0,0,0};
	int q2[10] = { 1,0,0,0,0,0,0,0,1,0 };
	int q3[10] = { 1,0,0,0,0,0,0,0,1,0 };
	int q4[10] = { 1,0,0,0,0,0,1,0,1,0 };
	int q5[10] = { 0,0,1,0,1,0,1,0,1,0 };

	int r1[10] = { 1,0,1,0,1,0,1,0,0,0 };
	int r2[10] = { 1,0,0,0,0,0,0,0,1,0 };
	int r3[10] = { 1,0,1,0,1,0,1,0,0,0 };
	int r4[10] = { 1,0,0,0,1,0,0,0,0,0 };
	int r5[10] = { 1,0,0,0,0,0,1,0,0,0 };

	int s1[8] = { 0,0,1,0,1,0,1,0 };
	int s2[8] = { 1,0,0,0,0,0,0,0 };
	int s3[8] = { 1,0,1,0,1,0,0,0 };
	int s4[8] = { 0,0,0,0,0,0,1,0 };
	int s5[8] = { 1,0,1,0,1,0,0,0 };

	int t1[10] = { 1,0,1,0,1,0,1,0,1,0 };
	int t2[10] = { 0,0,0,0,1,0,0,0,0,0 };
	int t3[10] = { 0,0,0,0,1,0,0,0,0,0 };
	int t4[10] = { 0,0,0,0,1,0,0,0,0,0 };
	int t5[10] = { 0,0,0,0,1,0,0,0,0,0 };

	int u1[8] = { 1,0,0,0,0,0,1,0 };
	int u2[8] = { 1,0,0,0,0,0,1,0 };
	int u3[8] = { 1,0,0,0,0,0,1,0 };
	int u4[8] = { 1,0,0,0,0,0,1,0 };
	int u5[8] = { 1,0,1,0,1,0,1,0 };

	int v1[8] = { 1,0,0,0,0,0,1,0 };
	int v2[8] = { 1,0,0,0,0,0,1,0 };
	int v3[8] = { 1,0,0,0,0,0,1,0 };
	int v4[8] = { 1,0,0,0,0,0,1,0 };
	int v5[8] = { 0,0,1,0,1,0,0,0 };

	int w1[10] = { 1,0,0,0,0,0,0,0,1,0 };
	int w2[10] = { 1,0,0,0,0,0,0,0,1,0 };
	int w3[10] = { 1,0,0,0,1,0,0,0,1,0 };
	int w4[10] = { 1,0,1,0,0,0,1,0,1,0 };
	int w5[10] = { 1,0,0,0,0,0,0,0,1,0 };

	int x1[10] = { 1,0,0,0,0,0,0,0,1,0 };
	int x2[10] = { 0,0,1,0,0,0,1,0,0,0 };
	int x3[10] = { 0,0,0,0,1,0,0,0,0,0 };
	int x4[10] = { 0,0,1,0,0,0,1,0,0,0 };
	int x5[10] = { 1,0,0,0,0,0,0,0,1,0 };

	int y1[10] = { 1,0,0,0,0,0,0,0,1,0 };
	int y2[10] = { 0,0,1,0,0,0,1,0,0,0 };
	int y3[10] = { 0,0,0,0,1,0,0,0,0,0 };
	int y4[10] = { 0,0,0,0,1,0,0,0,0,0 };
	int y5[10] = { 0,0,0,0,1,0,0,0,0,0 };

	int z1[10] = { 1,0,1,0,1,0,1,0,1,0 };
	int z2[10] = { 0,0,0,0,0,0,1,0,0,0 };
	int z3[10] = { 0,0,0,0,1,0,0,0,0,0 };
	int z4[10] = { 0,0,1,0,0,0,0,0,0,0 };
	int z5[10] = { 1,0,1,0,1,0,1,0,0,0 };

	int zero1[10] = { 0,0,1,0,1,0,1,0,0,0 };
	int zero2[10] = { 1,0,0,0,0,0,0,0,1,0 };
	int zero3[10] = { 1,0,1,0,1,0,1,0,1,0 };
	int zero4[10] = { 1,0,0,0,0,0,0,0,1,0 };
	int zero5[10] = { 0,0,1,0,1,0,1,0,0,0 };

	int one1[10] = { 0,0,0,0,1,0,0,0,0,0 };
	int one2[10] = { 0,0,1,0,1,0,0,0,0,0 };
	int one3[10] = { 1,0,0,0,1,0,0,0,0,0 };
	int one4[10] = { 0,0,0,0,1,0,0,0,0,0 };
	int one5[10] = { 1,0,1,0,1,0,1,0,1,0 };

	int two1[8] = { 1,0,1,0,1,0,0,0 };
	int two2[8] = { 0,0,0,0,0,0,1,0 };
	int two3[8] = { 1,0,1,0,1,0,1,0 };
	int two4[8] = { 1,0,0,0,0,0,0,0 };
	int two5[8] = { 0,0,1,0,1,0,1,0 };

	int three1[8] = { 1,0,1,0,1,0,0,0 };
	int three2[8] = { 0,0,0,0,0,0,1,0 };
	int three3[8] = { 1,0,1,0,1,0,0,0 };
	int three4[8] = { 0,0,0,0,0,0,1,0 };
	int three5[8] = { 1,0,1,0,1,0,0,0 };

	int four1[8] = { 1,0,0,0,0,0,1,0 };
	int four2[8] = { 1,0,0,0,0,0,1,0 };
	int four3[8] = { 1,0,1,0,1,0,1,0 };
	int four4[8] = { 0,0,0,0,0,0,1,0 };
	int four5[8] = { 0,0,0,0,0,0,1,0 };

	int five1[8] = { 1,0,1,0,1,0,1,0 };
	int five2[8] = { 1,0,0,0,0,0,0,0 };
	int five3[8] = { 1,0,1,0,1,0,0,0 };
	int five4[8] = { 0,0,0,0,0,0,1,0 };
	int five5[8] = { 1,0,1,0,1,0,0,0 };

	int six1[8] = { 1,0,1,0,1,0,1,0 };
	int six2[8] = { 1,0,0,0,0,0,0,0 };
	int six3[8] = { 1,0,1,0,1,0,1,0 };
	int six4[8] = { 1,0,0,0,0,0,1,0 };
	int six5[8] = { 1,0,1,0,1,0,1,0 };

	int seven1[8] = { 1,0,1,0,1,0,1,0 };
	int seven2[8] = { 0,0,0,0,0,0,1,0 };
	int seven3[8] = { 0,0,0,0,0,0,1,0 };
	int seven4[8] = { 0,0,0,0,0,0,1,0 };
	int seven5[8] = { 0,0,0,0,0,0,1,0 };

	int eight1[8] = { 0,0,1,0,1,0,0,0 };
	int eight2[8] = { 1,0,0,0,0,0,1,0 };
	int eight3[8] = { 0,0,1,0,1,0,0,0 };
	int eight4[8] = { 1,0,0,0,0,0,1,0 };
	int eight5[8] = { 0,0,1,0,1,0,0,0 };

	int nine1[8] = { 1,0,1,0,1,0,1,0 };
	int nine2[8] = { 1,0,0,0,0,0,1,0 };
	int nine3[8] = { 1,0,1,0,1,0,1,0 };
	int nine4[8] = { 0,0,0,0,0,0,1,0 };
	int nine5[8] = { 0,0,0,0,0,0,1,0 };
	//8===D~~~

	


	cout << "Enter character" << endl;
	cin >> character;
	cout << "Enter letter" << endl;
	cin >> letter;
	cout << "\n";

	switch (letter)
	{
	case 'A':
		for (int i = 0; i < 7; i = i + 1)
		{
			if (a1[i] == 1)
				cout << character;
			else if (a1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (a2[k] == 1)
				cout << character;
			else if (a2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 7; l = l + 1)
		{
			if (a3[l] == 1)
				cout << character;
			else if (a3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 7; j = j + 1)
		{
			if (a4[j] == 1)
				cout << character;
			else if (a4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (a5[k] == 1)
				cout << character;
			else if (a5[k] == 0)
				cout << " ";
		}
		break;

	case 'B':
		for (int i = 0; i < 8; i = i + 1)
		{
			if (b1[i] == 1)
				cout << character;
			else if (b1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 8; k = k + 1)
		{
			if (b2[k] == 1)
				cout << character;
			else if (b2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 8; l = l + 1)
		{
			if (b3[l] == 1)
				cout << character;
			else if (b3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 8; j = j + 1)
		{
			if (b4[j] == 1)
				cout << character;
			else if (b4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 8; k = k + 1)
		{
			if (b5[k] == 1)
				cout << character;
			else if (b5[k] == 0)
				cout << " ";
		}
		break;

	case 'C':
		for (int i = 0; i < 8; i = i + 1)
		{
			if (c1[i] == 1)
				cout << character;
			else if (c1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 8; k = k + 1)
		{
			if (c2[k] == 1)
				cout << character;
			else if (c2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 8; l = l + 1)
		{
			if (c3[l] == 1)
				cout << character;
			else if (c3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 8; j = j + 1)
		{
			if (c4[j] == 1)
				cout << character;
			else if (c4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 8; k = k + 1)
		{
			if (c5[k] == 1)
				cout << character;
			else if (c5[k] == 0)
				cout << " ";
		}
		break;

	case 'D':
		for (int i = 0; i < 8; i = i + 1)
		{
			if (d1[i] == 1)
				cout << character;
			else if (d1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 8; k = k + 1)
		{
			if (d2[k] == 1)
				cout << character;
			else if (d2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 8; l = l + 1)
		{
			if (d3[l] == 1)
				cout << character;
			else if (d3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 8; j = j + 1)
		{
			if (d4[j] == 1)
				cout << character;
			else if (d4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 8; k = k + 1)
		{
			if (d5[k] == 1)
				cout << character;
			else if (d5[k] == 0)
				cout << " ";
		}
		break;

	case 'E':
		for (int i = 0; i < 8; i = i + 1)
		{
			if (e1[i] == 1)
				cout << character;
			else if (e1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 8; k = k + 1)
		{
			if (e2[k] == 1)
				cout << character;
			else if (e2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 8; l = l + 1)
		{
			if (e3[l] == 1)
				cout << character;
			else if (e3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 8; j = j + 1)
		{
			if (e4[j] == 1)
				cout << character;
			else if (e4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 8; k = k + 1)
		{
			if (e5[k] == 1)
				cout << character;
			else if (e5[k] == 0)
				cout << " ";
		}
		break;

	case 'F':
		for (int i = 0; i < 8; i = i + 1)
		{
			if (f1[i] == 1)
				cout << character;
			else if (f1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 8; k = k + 1)
		{
			if (f2[k] == 1)
				cout << character;
			else if (f2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 8; l = l + 1)
		{
			if (f3[l] == 1)
				cout << character;
			else if (f3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 8; j = j + 1)
		{
			if (f4[j] == 1)
				cout << character;
			else if (f4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 8; k = k + 1)
		{
			if (f5[k] == 1)
				cout << character;
			else if (f5[k] == 0)
				cout << " ";
		}
		break;

	case 'G':
		for (int i = 0; i < 8; i = i + 1)
		{
			if (g1[i] == 1)
				cout << character;
			else if (g1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 8; k = k + 1)
		{
			if (g2[k] == 1)
				cout << character;
			else if (g2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 8; l = l + 1)
		{
			if (g3[l] == 1)
				cout << character;
			else if (g3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 8; j = j + 1)
		{
			if (g4[j] == 1)
				cout << character;
			else if (g4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 8; k = k + 1)
		{
			if (g5[k] == 1)
				cout << character;
			else if (g5[k] == 0)
				cout << " ";
		}
		break;

	case 'H':
		for (int i = 0; i < 8; i = i + 1)
		{
			if (h1[i] == 1)
				cout << character;
			else if (h1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 8; k = k + 1)
		{
			if (h2[k] == 1)
				cout << character;
			else if (h2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 8; l = l + 1)
		{
			if (h3[l] == 1)
				cout << character;
			else if (h3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 8; j = j + 1)
		{
			if (h4[j] == 1)
				cout << character;
			else if (h4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 8; k = k + 1)
		{
			if (h5[k] == 1)
				cout << character;
			else if (h5[k] == 0)
				cout << " ";
		}
		break;

	case 'I':
		for (int i = 0; i < 10; i = i + 1)
		{
			if (i1[i] == 1)
				cout << character;
			else if (i1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 10; k = k + 1)
		{
			if (i2[k] == 1)
				cout << character;
			else if (i2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 10; l = l + 1)
		{
			if (i3[l] == 1)
				cout << character;
			else if (i3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 10; j = j + 1)
		{
			if (i4[j] == 1)
				cout << character;
			else if (i4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 10; k = k + 1)
		{
			if (i5[k] == 1)
				cout << character;
			else if (i5[k] == 0)
				cout << " ";
		}
		break;

	case 'J':
		for (int i = 0; i < 10; i = i + 1)
		{
			if (j1[i] == 1)
				cout << character;
			else if (j1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 10; k = k + 1)
		{
			if (j2[k] == 1)
				cout << character;
			else if (j2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 10; l = l + 1)
		{
			if (j3[l] == 1)
				cout << character;
			else if (j3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 10; j = j + 1)
		{
			if (j4[j] == 1)
				cout << character;
			else if (j4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 10; k = k + 1)
		{
			if (j5[k] == 1)
				cout << character;
			else if (j5[k] == 0)
				cout << " ";
		}
		break;

	case 'K':
		for (int i = 0; i < 5; i = i + 1)
		{
			if (k1[i] == 1)
				cout << character;
			else if (k1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 5; k = k + 1)
		{
			if (k2[k] == 1)
				cout << character;
			else if (k2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 5; l = l + 1)
		{
			if (k3[l] == 1)
				cout << character;
			else if (k3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 5; j = j + 1)
		{
			if (k4[j] == 1)
				cout << character;
			else if (k4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 5; k = k + 1)
		{
			if (k5[k] == 1)
				cout << character;
			else if (k5[k] == 0)
				cout << " ";
		}
		break;

	case 'L':
		for (int i = 0; i < 9; i = i + 1)
		{
			if (l1[i] == 1)
				cout << character;
			else if (l1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (l2[k] == 1)
				cout << character;
			else if (l2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 9; l = l + 1)
		{
			if (l3[l] == 1)
				cout << character;
			else if (l3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 9; j = j + 1)
		{
			if (l4[j] == 1)
				cout << character;
			else if (l4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (l5[k] == 1)
				cout << character;
			else if (l5[k] == 0)
				cout << " ";
		}
		break;

	case 'M':
		for (int i = 0; i < 9; i = i + 1)
		{
			if (m1[i] == 1)
				cout << character;
			else if (m1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (m2[k] == 1)
				cout << character;
			else if (m2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 9; l = l + 1)
		{
			if (m3[l] == 1)
				cout << character;
			else if (m3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 9; j = j + 1)
		{
			if (m4[j] == 1)
				cout << character;
			else if (m4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (m5[k] == 1)
				cout << character;
			else if (m5[k] == 0)
				cout << " ";
		}
		break;

	case 'N':
		for (int i = 0; i < 9; i = i + 1)
		{
			if (n1[i] == 1)
				cout << character;
			else if (n1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (n2[k] == 1)
				cout << character;
			else if (n2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 9; l = l + 1)
		{
			if (n3[l] == 1)
				cout << character;
			else if (n3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 9; j = j + 1)
		{
			if (n4[j] == 1)
				cout << character;
			else if (n4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (n5[k] == 1)
				cout << character;
			else if (n5[k] == 0)
				cout << " ";
		}
		break;

	case 'O':
		for (int i = 0; i < 9; i = i + 1)
		{
			if (o1[i] == 1)
				cout << character;
			else if (o1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (o2[k] == 1)
				cout << character;
			else if (o2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 9; l = l + 1)
		{
			if (o3[l] == 1)
				cout << character;
			else if (o3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 9; j = j + 1)
		{
			if (o4[j] == 1)
				cout << character;
			else if (o4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (o5[k] == 1)
				cout << character;
			else if (o5[k] == 0)
				cout << " ";
		}
		break;

	case 'P':
		for (int i = 0; i < 7; i = i + 1)
		{
			if (p1[i] == 1)
				cout << character;
			else if (p1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (p2[k] == 1)
				cout << character;
			else if (p2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 7; l = l + 1)
		{
			if (p3[l] == 1)
				cout << character;
			else if (p3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 7; j = j + 1)
		{
			if (p4[j] == 1)
				cout << character;
			else if (p4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (p5[k] == 1)
				cout << character;
			else if (p5[k] == 0)
				cout << " ";
		}
		break;

	case 'Q':
		for (int i = 0; i < 9; i = i + 1)
		{
			if (q1[i] == 1)
				cout << character;
			else if (q1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (q2[k] == 1)
				cout << character;
			else if (q2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 9; l = l + 1)
		{
			if (q3[l] == 1)
				cout << character;
			else if (q3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 9; j = j + 1)
		{
			if (q4[j] == 1)
				cout << character;
			else if (q4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (q5[k] == 1)
				cout << character;
			else if (q5[k] == 0)
				cout << " ";
		}
		break;

	case 'R':
		for (int i = 0; i < 9; i = i + 1)
		{
			if (r1[i] == 1)
				cout << character;
			else if (r1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (r2[k] == 1)
				cout << character;
			else if (r2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 9; l = l + 1)
		{
			if (r3[l] == 1)
				cout << character;
			else if (r3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 9; j = j + 1)
		{
			if (r4[j] == 1)
				cout << character;
			else if (r4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (r5[k] == 1)
				cout << character;
			else if (r5[k] == 0)
				cout << " ";
		}
		break;

	case 'S':
		for (int i = 0; i < 8; i = i + 1)
		{
			if (s1[i] == 1)
				cout << character;
			else if (s1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 8; k = k + 1)
		{
			if (s2[k] == 1)
				cout << character;
			else if (s2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 8; l = l + 1)
		{
			if (s3[l] == 1)
				cout << character;
			else if (s3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 8; j = j + 1)
		{
			if (s4[j] == 1)
				cout << character;
			else if (s4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 8; k = k + 1)
		{
			if (s5[k] == 1)
				cout << character;
			else if (s5[k] == 0)
				cout << " ";
		}
		break;

	case 'T':
		for (int i = 0; i < 10; i = i + 1)
		{
			if (t1[i] == 1)
				cout << character;
			else if (t1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 10; k = k + 1)
		{
			if (t2[k] == 1)
				cout << character;
			else if (t2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 10; l = l + 1)
		{
			if (t3[l] == 1)
				cout << character;
			else if (t3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 10; j = j + 1)
		{
			if (t4[j] == 1)
				cout << character;
			else if (t4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 10; k = k + 1)
		{
			if (t5[k] == 1)
				cout << character;
			else if (t5[k] == 0)
				cout << " ";
		}
		break;

	case 'U':
		for (int i = 0; i < 7; i = i + 1)
		{
			if (u1[i] == 1)
				cout << character;
			else if (u1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (u2[k] == 1)
				cout << character;
			else if (u2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 7; l = l + 1)
		{
			if (u3[l] == 1)
				cout << character;
			else if (u3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 7; j = j + 1)
		{
			if (u4[j] == 1)
				cout << character;
			else if (u4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (u5[k] == 1)
				cout << character;
			else if (u5[k] == 0)
				cout << " ";
		}
		break;

	case 'V':
		for (int i = 0; i < 7; i = i + 1)
		{
			if (v1[i] == 1)
				cout << character;
			else if (v1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (v2[k] == 1)
				cout << character;
			else if (v2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 7; l = l + 1)
		{
			if (v3[l] == 1)
				cout << character;
			else if (v3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 7; j = j + 1)
		{
			if (v4[j] == 1)
				cout << character;
			else if (v4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (v5[k] == 1)
				cout << character;
			else if (v5[k] == 0)
				cout << " ";
		}
		break;

	case 'W':
		for (int i = 0; i < 9; i = i + 1)
		{
			if (w1[i] == 1)
				cout << character;
			else if (w1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (w2[k] == 1)
				cout << character;
			else if (w2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 9; l = l + 1)
		{
			if (w3[l] == 1)
				cout << character;
			else if (w3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 9; j = j + 1)
		{
			if (w4[j] == 1)
				cout << character;
			else if (w4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (w5[k] == 1)
				cout << character;
			else if (w5[k] == 0)
				cout << " ";
		}
		break;

	case 'X':
		for (int i = 0; i < 9; i = i + 1)
		{
			if (x1[i] == 1)
				cout << character;
			else if (x1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (x2[k] == 1)
				cout << character;
			else if (x2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 9; l = l + 1)
		{
			if (x3[l] == 1)
				cout << character;
			else if (x3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 9; j = j + 1)
		{
			if (x4[j] == 1)
				cout << character;
			else if (x4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (x5[k] == 1)
				cout << character;
			else if (x5[k] == 0)
				cout << " ";
		}
		break;

	case 'Y':
		for (int i = 0; i < 9; i = i + 1)
		{
			if (y1[i] == 1)
				cout << character;
			else if (y1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (y2[k] == 1)
				cout << character;
			else if (y2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 9; l = l + 1)
		{
			if (y3[l] == 1)
				cout << character;
			else if (y3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 9; j = j + 1)
		{
			if (y4[j] == 1)
				cout << character;
			else if (y4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (y5[k] == 1)
				cout << character;
			else if (y5[k] == 0)
				cout << " ";
		}
		break;

	case 'Z':
		for (int i = 0; i < 9; i = i + 1)
		{
			if (z1[i] == 1)
				cout << character;
			else if (z1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (z2[k] == 1)
				cout << character;
			else if (z2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 9; l = l + 1)
		{
			if (z3[l] == 1)
				cout << character;
			else if (z3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 9; j = j + 1)
		{
			if (z4[j] == 1)
				cout << character;
			else if (z4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (z5[k] == 1)
				cout << character;
			else if (z5[k] == 0)
				cout << " ";
		}
		break;

	case '1':
		for (int i = 0; i < 9; i = i + 1)
		{
			if (one1[i] == 1)
				cout << character;
			else if (one1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (one2[k] == 1)
				cout << character;
			else if (one2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 9; l = l + 1)
		{
			if (one3[l] == 1)
				cout << character;
			else if (one3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 9; j = j + 1)
		{
			if (one4[j] == 1)
				cout << character;
			else if (one4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 9; k = k + 1)
		{
			if (one5[k] == 1)
				cout << character;
			else if (one5[k] == 0)
				cout << " ";
		}
		break;

	case '2':
		for (int i = 0; i < 7; i = i + 1)
		{
			if (two1[i] == 1)
				cout << character;
			else if (two1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (two2[k] == 1)
				cout << character;
			else if (two2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 7; l = l + 1)
		{
			if (two3[l] == 1)
				cout << character;
			else if (two3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 7; j = j + 1)
		{
			if (two4[j] == 1)
				cout << character;
			else if (two4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (two5[k] == 1)
				cout << character;
			else if (two5[k] == 0)
				cout << " ";
		}
		break;

	case '3':
		for (int i = 0; i < 7; i = i + 1)
		{
			if (three1[i] == 1)
				cout << character;
			else if (three1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (three2[k] == 1)
				cout << character;
			else if (three2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 7; l = l + 1)
		{
			if (three3[l] == 1)
				cout << character;
			else if (three3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 7; j = j + 1)
		{
			if (three4[j] == 1)
				cout << character;
			else if (three4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (three5[k] == 1)
				cout << character;
			else if (three5[k] == 0)
				cout << " ";
		}
		break;

	case '4':
		for (int i = 0; i < 7; i = i + 1)
		{
			if (four1[i] == 1)
				cout << character;
			else if (four1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (four2[k] == 1)
				cout << character;
			else if (four2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 7; l = l + 1)
		{
			if (four3[l] == 1)
				cout << character;
			else if (four3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 7; j = j + 1)
		{
			if (four4[j] == 1)
				cout << character;
			else if (four4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (four5[k] == 1)
				cout << character;
			else if (four5[k] == 0)
				cout << " ";
		}
		break;

	case '5':
		for (int i = 0; i < 7; i = i + 1)
		{
			if (five1[i] == 1)
				cout << character;
			else if (five1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (five2[k] == 1)
				cout << character;
			else if (five2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 7; l = l + 1)
		{
			if (five3[l] == 1)
				cout << character;
			else if (five3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 7; j = j + 1)
		{
			if (five4[j] == 1)
				cout << character;
			else if (five4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (five5[k] == 1)
				cout << character;
			else if (five5[k] == 0)
				cout << " ";
		}
		break;

	case '6':
		for (int i = 0; i < 7; i = i + 1)
		{
			if (six1[i] == 1)
				cout << character;
			else if (six1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (six2[k] == 1)
				cout << character;
			else if (six2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 7; l = l + 1)
		{
			if (six3[l] == 1)
				cout << character;
			else if (six3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 7; j = j + 1)
		{
			if (six4[j] == 1)
				cout << character;
			else if (six4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (six5[k] == 1)
				cout << character;
			else if (six5[k] == 0)
				cout << " ";
		}
		break;

	case '7':
		for (int i = 0; i < 7; i = i + 1)
		{
			if (seven1[i] == 1)
				cout << character;
			else if (seven1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (seven2[k] == 1)
				cout << character;
			else if (seven2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 7; l = l + 1)
		{
			if (seven3[l] == 1)
				cout << character;
			else if (seven3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 7; j = j + 1)
		{
			if (seven4[j] == 1)
				cout << character;
			else if (seven4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (seven5[k] == 1)
				cout << character;
			else if (seven5[k] == 0)
				cout << " ";
		}
		break;

	case '8':
		for (int i = 0; i < 7; i = i + 1)
		{
			if (eight1[i] == 1)
				cout << character;
			else if (eight1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (eight2[k] == 1)
				cout << character;
			else if (eight2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 7; l = l + 1)
		{
			if (eight3[l] == 1)
				cout << character;
			else if (eight3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 7; j = j + 1)
		{
			if (eight4[j] == 1)
				cout << character;
			else if (eight4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (eight5[k] == 1)
				cout << character;
			else if (eight5[k] == 0)
				cout << " ";
		}
		break;

	case '9':
		for (int i = 0; i < 7; i = i + 1)
		{
			if (nine1[i] == 1)
				cout << character;
			else if (nine1[i] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (nine2[k] == 1)
				cout << character;
			else if (nine2[k] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int l = 0; l < 7; l = l + 1)
		{
			if (nine3[l] == 1)
				cout << character;
			else if (nine3[l] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int j = 0; j < 7; j = j + 1)
		{
			if (nine4[j] == 1)
				cout << character;
			else if (nine4[j] == 0)
				cout << " ";
		}
		cout << "\n";

		for (int k = 0; k < 7; k = k + 1)
		{
			if (nine5[k] == 1)
				cout << character;
			else if (nine5[k] == 0)
				cout << " ";
		}
		break;
	}
	cout <<"\n\n";
    return 0;
}

