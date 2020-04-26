#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, i = 0;
	vector<int> v;

	cin >> n;

	while (n > 0) 
	{
		v.push_back(n % 2);
		n = n / 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		cout << v.at(j);
	}
		
	return 0;
}