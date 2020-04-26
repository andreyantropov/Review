#include "pch.h"
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	double n, a, b, x, y;

	cin >> n >> a >> b >> x >> y;

	if(n > a && n < b)
	{	
		cout << n-((a / 100)*x);
	}
	else if(n > b && a < b)
	{
		cout << n-((n / 100)*y);
	}

}