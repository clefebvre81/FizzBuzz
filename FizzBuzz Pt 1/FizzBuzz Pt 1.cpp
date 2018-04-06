// FizzBuzz Pt 1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	int number;
	int numbers[3];
	int i = 0;
	int array;

	cout << "Would you like to enter an array of numbers? (1 or 2) ";
	cin >> array;
	if (array == 2)
	{
		cout << "Please enter an array of numbers. (Use commas to separate numbers)";
		cin >> numbers[0] >> numbers[1] >> numbers[2];

		while (i < 3)
		{
			if (numbers[i] % 3 == 0 && numbers[i] % 5 == 0)
				cout << "Number: " << numbers[i] << " - FizzBuzz, ";
			else if (numbers[i] % 3 == 0)
			{
				cout << "Number: " << numbers[i] << " - Fizz, ";
			}
			else if (numbers[i] % 5 == 0)
			{
				cout << "Number: " << numbers[i] << " - Buzz, ";
			}
			else {
				cout << "Sorry " << numbers[i] << " is not divisible by 3 or 5!, ";
			}
			i = i + 1;
		}
	}
	else
	{
		cout << "Please enter a positive number (Hit Enter to continue)";
		cin >> number;

		if (number % 3 == 0 && number % 5 == 0)
		{
			cout << "Number: " << number << " - FizzBuzz" << endl;
		}
		else if (number % 3 == 0)
		{
			cout << "Number: " << number << " - Fizz" << endl;
		}
		else if (number % 5 == 0)
		{
			cout << "Number: " << number << " - Buzz" << endl;
		}
		else {
			cout << "Sorry " << number << " is not divisible by 3 or 5!" << endl;
		}
	}
    return 0;
}

