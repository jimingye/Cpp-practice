#include <iostream>

using namespace::std;

void change(int *&ip1, int *&ip2)                 //取引用才可以修改实参的值。
{
	int *ip3;
	ip3 = ip1;
	ip1 = ip2;
	ip2 = ip3;
}

int main()
{
	int a=5, b=6;
	int *p1=&a, *p2=&b;
	change(p1, p2);
	cout << *p1 << *p2  <<endl;
	return 0;
}