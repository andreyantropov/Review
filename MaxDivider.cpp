#include "pch.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int first, second, number;

	cin >> first >> second;

	for(int i = 1;i<= min(first, second);i++)
	{
		if(first % i == 0 && second % i == 0)
		{
			number = i;
		}
	}
	cout << number;

	return 0;
}