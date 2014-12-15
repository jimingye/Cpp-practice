#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace::std;

int main()
{
	ifstream input("in.txt");
	vector<string> svec;
	string s;
	while(getline(input,s))
	svec.push_back(s);
	for(auto c : svec)
	{
		cout << c << endl;
	}
	return 0;
}