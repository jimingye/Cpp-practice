#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1;
	string s2;
	cout << "please enter two strings:" << endl;
	cin >> s1 >> s2;
	if (s1.size() == s2.size())
		cout << s1 << endl;
	else if (s1.size() < s2.size())
		cout << s2 << endl;
	else
		cout << s1 << endl;
	return 0;
}