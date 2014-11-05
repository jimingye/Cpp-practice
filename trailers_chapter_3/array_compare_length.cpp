#include<iostream>
#include<string>
#include<cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1 = "a string example";
	string s2 = "a string Example";
	const char ca1[] = "a string example";
	const char ca2[] = "a string Example";
	if (s1>s2)
	{
		cout << s2 << endl;
	}
	if (strcmp(ca1,ca2)>0)
	{
		cout << ca2 << endl;
	}
	return 0;
}
