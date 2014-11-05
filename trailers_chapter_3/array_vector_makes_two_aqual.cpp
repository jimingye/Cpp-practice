#include<iostream>
#include<cstddef>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

/*int main()
{
	const size_t array_size = 10;
	int ia1[array_size];
	int ia2[array_size];
	for (size_t ix = 0; ix != array_size; ++ix)
	{
		ia1[ix] = ix;
		ia2[ix] = ia1[ix];
	}
	for (auto i:ia2)
	{
		cout << i << " ";
		cout << endl;
	}
	return 0;
}*/

int main()
{
	vector<int> ivec1, ivec2;
	for (int i = 0; i != 10;++i)
	{
		ivec1.push_back(i);
	}
	ivec2 = ivec1;
	for (auto n:ivec2)
	{
		cout << n << "";
		cout << endl;
	}
	return 0;
}