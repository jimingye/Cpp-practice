#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

/*int main()       //˳���������
{
    int i;
    vector<int> ivec;
    while (cin>>i)
    {
         ivec.push_back(i);
    }
	for (auto it = ivec.begin(); it!=ivec.end()-1; ++it)        //-1�����٣���������
    {
         cout << *it + *(it+1) << endl;
    }
    return 0;
}*/

int main()        //��β�������
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