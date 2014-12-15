#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace::std;

int main()
{
	ifstream input("in.txt");
	vector<string> svec;
	string s, word;
	while(getline(input,s))
	svec.push_back(s);
	for(auto c : svec)
	{
		istringstream cout_word(c);
		while(cout_word >> word)
			cout << word << endl;
	}
	return 0;
}