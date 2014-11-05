#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
	int ia1[] = { 1, 2, 3, 4, 5 };
	int ia2[] = { 1, 2, 3, 3, 5 };
	string sa1[] = { "one", "two", "three", "four", "five" };
	string sa2[] = { "one", "two", "three", "three", "five" };
	vector<int> ivec1{ 1, 2, 3, 4, 5 };
	vector<int> ivec2{ 1, 2, 4, 4, 5 };
	vector<string> svec1{ "one", "two", "three", "four", "five" };
	vector<string> svec2{ "one", "two", "four", "four", "five" };
	for (int i = 0; i != 5;++i)
	{
		if (ia1[i]!=ia2[i])
		{
			cout << "两个数组不相等" << endl;
		}
		if (sa1[i] != sa2[i])
		{
			cout << "两个字符串不相等" << endl;
		}
	}
	if (ivec1!=ivec2)
	{
		cout << "两个整数容器不相等" << endl;
	}
	if (svec1 != svec2)
	{
		cout << "两个字符串容器不相等" << endl;
	}
	return 0;
}
