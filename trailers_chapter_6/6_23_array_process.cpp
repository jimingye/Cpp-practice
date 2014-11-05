#include <iostream>

using namespace::std;

void print(const int *i)                                       //将整数转换为指针。
{
	cout << *i <<endl;
}

void print1(const int *beg, const int *end)                    //标准库规范输出数组。
{
	while(beg!=end)
		{
			cout << *beg <<" ";
	        ++beg;
	    }
	cout << '\n';
}

void print2(const int ia[], size_t size)                       //显式传递表达数组大小的形参。
{
	for(size_t i=0; i!= size; ++i)
	{
		cout << ia[i] << " ";
	}
	cout << '\n';
}

void print3(const int (&ia)[2])                                //数组引用形参，需指定特定的维度。
{
	for (auto n : ia)
		cout << n << " ";
	cout << '\n';
}

int main()
{
	int i=0;
	int j[2]={0,1};
	print(&i);
	print1(begin(j), end(j));
	print2(j,2);
	print3(j);
	return 0;
}