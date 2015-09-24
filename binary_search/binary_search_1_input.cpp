#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int x, n;
	vector<int> ivec;
	cout << "please enter a number: " << endl;
	cin >> x;
	cout << "please enter a sorted number array: " << endl;
	while(cin >> n)
		ivec.push_back(n);											//push_back()要用循环来存入连串序列！！
	auto beg = ivec.begin();
	auto end = ivec.end();
	auto mid = beg + (end - beg)/2;
	while(mid != end)
	{
		if(x > *mid)
		{
			beg = mid + 1;
			mid = beg + (end - beg)/2;		
		}
		else if(x < *mid)
		{
			end = mid;
			mid = beg + (end - beg)/2;			
		}
		else
		{
			cout << "find it!!   " << *mid << endl;
			return 0;
		}
	}
	cout << "no such number in the array" << endl;
	return -1;
}

