#include <iostream>

using namespace::std;

int &get(int *array, int index)
{
	return array[index];
}

int main()
{
	int ia[10];
	for (int i = 0; i != 10; ++i)
	{
		get(ia , i) = 2*i;                                   //引用返回左值，所以可以对get函数进行赋值操作。
		cout<<get(ia , i)<<" ";
	}
	return 0;

}