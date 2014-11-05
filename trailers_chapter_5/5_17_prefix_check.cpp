#include <iostream>
#include <vector>

using namespace::std;

int main()
{
	vector<int> ivec1 = { 123 };
	vector<int> ivec2 = { 1, 2, 3, 4 };
	vector<int> ivec3;
	if (ivec1.size() < ivec2.size())
		ivec3 = ivec1;
	else  ivec3 = ivec2;
	for (int i = 0; i != ivec3.size(); ++i)
	{
		if (ivec3[i] == ivec1[i] && ivec3[i] == ivec2[i])
			cout << ivec3[i] << ' ';
		else
			cout << "no prefix exists!" << endl;
	}
	return 0;
}