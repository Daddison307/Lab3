// lab3-daddiso2.cpp : Defines the entry point for the console application.
// Addison Dugal

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

short sumOfIntsShort(short n)
{
	if (n > 255)
	{
		cout << "Number is too large: Overflow Error\n";
		return 0;
	}
	short sum = 0;
	for (short i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

long sumOfIntsLong(long n)
{
	if (n > 113511)
	{
		cout << "Number is too large: Overflow Error\n";
		return 0;
	}
	long sum = 0;
	for (long i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

float factorialFloat(long n)
{
	if (n > 34)
	{
		cout << "Number is too large: Overflow Error\n";
		return 0;
	}
	float product = 1;
	for (long i = 1; i <= n; i++)
	{
		product = product * i;
	}
	return product;
}

double factorialDouble(long n)
{
	if (n > 170)
	{
		cout << "Number is too large: Overflow Error\n";
		return 0;
	}
	double product = 1;
	for (long i = 1; i <= n; i++)
	{
		product = product * i;
	}
	return product;
}

float sumRecipFloat(float n)
{
	float sum = 0;
	for (float i = 1; i <= n; i++)
	{
		sum += (1 / n);
	}
	return sum;
}

double sumRecipDouble(double n)
{
	double sum = 0;
	for (double i = 1; i <= n; i++)
	{
		sum += (1 / n);
	}
	return sum;
}

int main()
{
	float a;
	cout << "Enter an integer (float): ";
	cin >> a;
	float b = sumRecipFloat(a);
	cout << "\nReciprocal sum (float) is : " << b << "\n";
	double c;
	cout << "Enter an integer (double): ";
	cin >> c;
	double d = sumRecipDouble(c);
	cout << "\nReciprocal sum (double) is : " << d << "\n";
	
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

	
	return 0;
}
