#include "pch.h"
#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr)
{
	map<int, int> mp;
	int max = 0, num = 0;
	int type1 = 0, type2 = 0, type3 = 0, type4 = 0, type5 = 0;

	for (int i = 0; i < arr.size(); i++)
	{
		switch (arr.at(i))
		{
		case 1: type1++;
			break;
		case 2: type2++;
			break;
		case 3: type3++;
			break;
		case 4: type4++;
			break;
		case 5: type5++;
			break;
		}
	}

	mp.insert({ 1,type1 });
	mp.insert({ 2,type2 });
	mp.insert({ 3,type3 });
	mp.insert({ 4,type4 });
	mp.insert({ 5,type5 });

	for (auto itr = mp.begin(); itr != mp.end(); ++itr) 
	{

		if (max < itr->second)
		{
			max = itr->second;
			num = itr->first;
		}
	}

	return num;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string arr_count_temp;
	getline(cin, arr_count_temp);

	int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

	string arr_temp_temp;
	getline(cin, arr_temp_temp);

	vector<string> arr_temp = split(rtrim(arr_temp_temp));

	vector<int> arr(arr_count);

	for (int i = 0; i < arr_count; i++) {
		int arr_item = stoi(arr_temp[i]);

		arr[i] = arr_item;
	}

	int result = migratoryBirds(arr);

	fout << result << "\n";

	fout.close();

	return 0;
}

string ltrim(const string &str) {
	string s(str);

	s.erase(
		s.begin(),
		find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
	);

	return s;
}

string rtrim(const string &str) {
	string s(str);

	s.erase(
		find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
		s.end()
	);

	return s;
}

vector<string> split(const string &str) {
	vector<string> tokens;

	string::size_type start = 0;
	string::size_type end = 0;

	while ((end = str.find(" ", start)) != string::npos) {
		tokens.push_back(str.substr(start, end - start));

		start = end + 1;
	}

	tokens.push_back(str.substr(start));

	return tokens;
}