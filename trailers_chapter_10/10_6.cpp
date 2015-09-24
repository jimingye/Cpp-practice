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
	fill_n(ivec.begin(), ivec.size(),0.1);
	for(auto n : ivec)
		cout << n <<' ';
	return 0;
}