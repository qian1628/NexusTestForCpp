// NexusTestForCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sum(int i, int j)
{
	return i + j;
}

double division(int a, int b)
{
	if (b == 0)
	{
		throw "Division by zero condition!";
	}
	return (a / b);
}


void fun()
{
	int a = 10;
	int b = 20;
	float f = 0.33;
	string a1 = "hello,nice to meet you!";
	string a2 = "my name is alisa!!!";
	string a3 = a1 + a2;
	int c = sum(a, b);
	while (true)
	{
		int num;
		cout << "please iuput a num:" << endl;
		cin >> num;
		if (num != 0)
		{
			cout << "the number is:" << num << endl;
		}
		else
		{
			cout << "exception devide zero" << endl;
		}
	}
}

int main()
{
	fun();
	int y = 0;
	double z = 0;

	try {
		z = division(x, y);
	}
	catch (const char* msg) {
	}

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