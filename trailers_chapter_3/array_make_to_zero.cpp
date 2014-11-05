#include <iostream>
#include <iterator>
#include <cstddef>

using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;

int main()
{
	int ia[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (auto i1 : ia)
	{
		cout << i1 << '\t';
	}
	cout << endl;
	int *pbegin = begin(ia);
	int *pend = end(ia);
	for (int *p = pbegin; p != pend; ++p)
	{
		*p = 0;
	}
	for (auto i2 : ia)
	{
		cout << i2 << '\t';
	}
	cout << endl;
	return 0;
}