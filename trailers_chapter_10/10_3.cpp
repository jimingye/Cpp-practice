#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <list>
#include <numeric>

using namespace::std;

int main()
{
	vector <double> ivec = {1.1,2.0,2.0,3.0,3.0,3.0,4.0,4.0,4.0,4.0,5.0,5.0,5.0,5.0,5.0};
	auto n = accumulate(ivec.cbegin(), ivec.cend(),0.0);
	cout << n <<' ';
	return 0;
}