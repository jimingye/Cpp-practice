#include <iostream>
#include <vector>

using std::endl;
using std::cout;
using std::cin;
using std::vector;

int main()
{
	vector<int> ivec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a[100];
	for (int i = 0; i != ivec.size(); ++i)
	{
		a[i] = ivec[i];
		cout << a[i]<<" ";
	}
	return 0;
}