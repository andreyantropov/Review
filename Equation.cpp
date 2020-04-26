#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, D;
	double x1, x2;

	cin >> a >> b >> c;

	if (a == 0)
	{
		x1 = (c / b);
		x1 = -x1;
		cout << "x1: " << x1;
	}
	else
	{
		D = (pow(b, 2)) - ((4 * a)*c);
	}

	if(D > 0)
	{
		x1 = ((-b) + (sqrt(D))) / (2 * a);
		x2 = ((-b) - (sqrt(D))) / (2 * a);
		cout <<"x1: "<< x1 << " " <<"x2: "<< x2 << endl;
	}
	else if(D == 0)
	{
		x1 = ((-b) + sqrt(D)) / (2 * a);
		cout << "x1: " << x1 << endl;
	}
	else
	{
		cout << "Error";
	}
}