#include <iostream>
#include <cctype>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s, s1;
	decltype(s.size()) index = 0;
	cout << "please enter a string:" << endl;
	cin >> s;
	while (index < s.size())
	{
		if (!ispunct(s[index]))
			s1 += s[index];
		    ++index;
	}
	cout << s1 << endl;//最后统一输出，若放在循环中则会多次输出。
	return 0;
}