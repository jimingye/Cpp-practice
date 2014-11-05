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
	for (auto it = ivec.begin(); it!=ivec.end()-1; ++it)        //-1不可少！！！！！
    {
         cout << *it + *(it+1) << endl;
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
	auto it1=ivec.begin();
	auto it2=ivec.end() - 1;
	for (; it1 <= it2; ++it1, --it2)
	{
		cout << *it1+*it2 << endl;
	}
	return 0;
}