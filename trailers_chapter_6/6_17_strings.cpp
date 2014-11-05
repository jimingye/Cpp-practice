#include <iostream>
#include <cctype>
#include <string>

using namespace::std;

void find_upper(const string &s1)
{
	for (auto c1 : s1)
	{
		if (isupper(c1))
			cout << c1 << " ";
	}
	cout << '\n';
}

void to_lower(string &s2)                                //此函数中未调用find_upper，所以可以不用定义为const，而且不会产生错误。
{
	for (auto c2 : s2)
	{
		if (isupper(c2))
			c2 = tolower(c2);
		cout << c2 << " ";
	}
}

int main()
{
	string s;
	cout << "please enter the string:" << endl;
	cin >> s;
	find_upper(s);
	to_lower(s);
    return 0;
}