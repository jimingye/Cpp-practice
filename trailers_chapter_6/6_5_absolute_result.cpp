#include<iostream>

using namespace::std;

int ab(int val)
{
	int temp;
	if (val < 0)
		temp = 0 - val;
	else temp = val;
	return temp;
}

int main()
{
	cout << "please enter a number:" << endl;
	int i;
	int ab(int);
	cin >> i;
	cout << ab(i) << endl;
	return 0;
}