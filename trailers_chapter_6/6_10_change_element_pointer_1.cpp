#include <iostream>

using namespace::std;

void change(int *p1, int *p2)                                      //定义为void则不用写返回类型。
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void change1(int &n1, int &n2)                                     //定义为指针与引用才可改变类型，定义为一般整形数，无法交换位置。
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

int main()
{
	int i1, i2, i3, i4;
	cout << "please enter four numbers:" << endl;
	cin >> i1 >> i2 >> i3 >> i4;
	int *ip1 = &i1, *ip2 = &i2;
	void change(int*, int*);
	void change1(int&, int&);
	change(ip1, ip2);
	change1(i3, i4);
	cout <<*ip1<<" "<<*ip2<< endl;
	cout << i3 << " " << i4 << endl;
	return 0;
}
