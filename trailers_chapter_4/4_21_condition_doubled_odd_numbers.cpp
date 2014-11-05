#include <iostream>
#include <vector>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> ivec;
	cout << "please enter numbers:" << endl;
	int number;
	while(cin >> number)
	ivec.push_back(number);
	for (auto i = ivec.begin(); i != ivec.end(); ++i)
	{
		int n = 0;
		n != *i % 2 ? *i *= 2 : *i;                      //条件运算符判断奇偶性。
		cout << *i << " ";
	}
	return 0;
}