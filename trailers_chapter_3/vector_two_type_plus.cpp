#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

/*int main()       //顺序两两相加
{
	int i;
	vector<int> ivec;
	while (cin>>i)
	{
		ivec.push_back(i);
	}
	for (decltype(ivec.size()) index = 0; index != ivec.size()-1; ++index)
	{
		cout << ivec[index] + ivec[index + 1] << endl;
	}
	return 0;
}*/

int main()        //首尾两两相加
{
	int i;
	vector<int> ivec;
	while (cin >> i)
	{
		ivec.push_back(i);
	}
	vector<int>::size_type first = 0;
	vector<int>::size_type last = ivec.size() - 1;
	for (; first<=last; ++first, --last)
	{
		cout << ivec[first] + ivec[last] << endl;
	}
	return 0;
}