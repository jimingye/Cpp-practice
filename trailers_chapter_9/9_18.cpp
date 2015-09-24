#include <iostream>
#include <string>
#include <deque>

using namespace::std;

int main()
{
	deque<string> s1;
	string s;
	while(cin >> s)
		s1.push_back(s);
	for(auto iter = s1.cbegin(); iter != s1.cend(); ++iter)
		cout << *iter << ' ';
	return 0;
}