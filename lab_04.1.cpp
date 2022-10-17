// lab_04.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Лабораторна робота№4.1

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int  N, i;
	double S;
	cout << "N = "; cin >> N;
	S = 0;
	i = 3;
	while (i <= N)
	{
		S += (cos(i/2.0) + sin(2*i))/(1.0 + sin(i) * cos(i));
		i++;
	}
	cout << S << endl;
		S = 0;
	i = 3;
	do {
		S += (cos(i / 2.0) + sin(2 * i)) / (1.0 + sin(i) * cos(i));
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = 3; i <= N; i++)
	{
		S += (cos(i / 2.0) + sin(2 * i)) / (1.0 + sin(i) * cos(i));
	}
	cout << S << endl;
	S = 0;
	for (i = N; i >= 3; i--)
	{
		S += (cos(i / 2.0) + sin(2 * i)) / (1.0 + sin(i) * cos(i));
	}
	cout << S << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
