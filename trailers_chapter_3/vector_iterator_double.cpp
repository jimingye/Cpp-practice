#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<int> ivec;
	int i;
	cout << "please enter 10 numbers:" << endl;
	while (cin>>i)
	{
		ivec.push_back(i);
	}
	for (auto i = ivec.begin(); i != ivec.end(); ++i)
	{
		*i = 2 * *i;
		cout << *i << endl;
	}
	return 0;
}