#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	cout << "please enter a number: " << endl;
	int x;
	cin >> x;
	vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	auto beg = ivec.begin();
	auto end = ivec.end();
	auto mid = beg + (end - beg)/2;
	while(mid != end && x != *mid)
	{
		if(x > *mid)
			beg = mid + 1;
		else
			end = mid;
		mid = beg + (end - beg)/2;
	}
	cout << *mid <<endl;
	return 0;
}




