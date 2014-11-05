#include <iostream>
#include <initializer_list>

using namespace::std;

void Sum(initializer_list<int> i)
{
	int sum=0;
	for(auto beg=i.begin(); beg != i.end(); ++beg)
	{
        sum+=*beg;
	}
	cout<<sum<<endl;
}

int main()
{
	Sum({1,2,3,4,5,6,7,8,9});
	return 0;
}