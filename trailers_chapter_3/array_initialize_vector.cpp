#include<iostream>
#include<vector>
#include<iterator>

using std::endl;
using std::cout;
using std::cin;
using std::vector;
using std::begin;
using std::end;

int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	vector<int> ivec(begin(a), end(a));
	for (auto i:ivec)
	{
		cout << i << endl;
	}
	return 0;
}