#include <iostream>
#include "loop.h"

using namespace::std;

int main()
{
	cout << "please enter a number:" << endl;
	int i;
	cin >> i;
	int fact(int);
	cout << i << "!" << "=" << fact(i) << endl;
	return 0;
}