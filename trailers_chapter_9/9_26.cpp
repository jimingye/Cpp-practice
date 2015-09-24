#include <iostream>
#include <vector>
#include <list>

using namespace::std;

int main()
{
	list <int> l;
	vector <int> v;
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	for (int i = 0; i != 11; ++i)
	{
		l.push_back(ia[i]);
		v.push_back(ia[i]);
	}
	for (auto l_iter = l.begin(); l_iter != l.end(); ++l_iter)
	{
		if(*l_iter % 2 == 1)
			l.erase(l_iter);
	}

	for (auto v_iter = v.begin(); v_iter != v.end(); ++v_iter)
	{
		if(*v_iter % 2 == 0)
			v.erase(v_iter);
	}
	for (auto n : l)
		cout << n << ' ';
	cout << endl;
	for (auto n : v)
		cout << n << ' ';
	return 0;
}