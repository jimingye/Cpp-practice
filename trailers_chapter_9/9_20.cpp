#include <iostream>
#include <string>
#include <list>
#include <deque>

using namespace::std;

int main()
{
	int i;
	list<int> i1;
	deque<int> d1, d2;
	while(cin >> i)
		i1.push_back(i);
	for(auto n : i1)
	{
		if(n % 2 ==1)
			d1.push_back(n);
		else
			d2.push_back(n);
	}
	for (auto n : d1)
		cout << n << ' ';
	cout << endl;
	for (auto n : d2)
		cout << n << ' ';
	return 0;
}