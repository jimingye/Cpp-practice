#include <iostream>
#include <vector>

using namespace::std;

void vec(vector<int> ivec)
{
	static size_t i=0;                                 //i需定义为局部静态变量，不然每次调用均会执行i的使用与销毁，导致程序无限循环ivec[1]的值。
	if(i != ivec.size())
	{
		cout << ivec[i]<<" ";
		++i;
		vec(ivec);                                     //函数中调用自身，形成递归。
	}
}

int main()
{
	vector<int> ivec1;
	int n;
	cout << "please enter numbers:" << endl;
	while(cin >> n)
		ivec1.push_back(n);
	vec(ivec1);
	return 0;
}