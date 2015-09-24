#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <list>
#include <numeric>
#include <iterator>
#include <iterator>

using namespace::std;

void elimDups(vector <string> &word)
{
	sort(word.begin(), word.end());
	auto end_unique = unique(word.begin(), word.end());
	word.erase(end_unique, word.end());
}

int main()
{
	vector <string> svec;
	string s;
	while (cin >> s)
		svec.push_back(s);
	elimDups(svec);
	for (auto c : svec)
		cout << c << ' ';
	return 0;
}