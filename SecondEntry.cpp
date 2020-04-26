#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	int count = 0,number=0;

	cin >> a;

	for(int i = 0;i < a.size();i++)
	{
		if(a[i]=='f' && count ==0)
		{
			count++;
		}
		else if(a[i] == 'f' && count == 1)
		{
			number =  i;
			count++;
		}
		else if(a[i] == 'f' && count > 1)
		{
			count++;
		}

	}

	if(count == 1 && number == 0)
	{
		cout << -1;
	}
	else if(number > count)
	{
		cout << number;
	}
	else if(count == 0)
	{
		cout << - 2;
	}
}
