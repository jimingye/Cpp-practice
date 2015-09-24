#include <iostream>
#include <vector>
#include <algorithm>

using namespace::std;

int main()
{
	vector <int> ivec = {1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
	auto n = count(ivec.begin(), ivec.end(),4);
	cout << n <<endl;
	return 0;
}