#include<iostream>

using namespace::std;

int fact(int val)
{
	int ret = 1;
	while (val > 1)
	{
		ret *= val;
		--val;
	}
	return ret;
}

int main()
{
	cout << "please enter a number:" << endl;
	int i;
	cin >> i;
	int fact(int);
	cout << i << "!" << "=" << fact(i) << endl;
	return 0;
}