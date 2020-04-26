#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int first,second;

	cin >> first >> second;

	for(int i = first;i <= second; i++)
	{
		if(i%2 == 0)
		{
			cout << i << " ";
		}
	}

}