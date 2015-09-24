#include <iostream>
#include <forward_list>

using namespace::std;

int main()
{
	forward_list <int> f = {0,1,2,3,4,5,6,7,8,9};
	auto prev = f.before_begin();
	auto curr = f.begin();
	while(curr != f.end())
	{
		if (* curr % 2 == 1)
			curr = f.erase_after(prev);
		else
		{
			prev = curr;
			++curr;
		}
	}
	for (auto n : f)
		cout << n << ' ';
	return 0;
}