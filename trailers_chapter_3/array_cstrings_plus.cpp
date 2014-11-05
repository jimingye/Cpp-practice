#include<iostream>
#include<cstring>

using std::endl;
using std::cout;
using std::cin;

int main()
{
	const char ca1[] = "hello";
	const char ca2[] = "world";
	char ca3[20]="\0";
	strcpy_s(ca3, ca1);
	strcat_s(ca3, " ");
	strcat_s(ca3, ca2);
	cout << ca3 << endl;
	return 0;
}