#include <iostream>
#include <vector>

using namespace::std;                                              

using F = int (int, int);                                          //定义类型别名F，为含两个int形参的int型函数。                                             

int sum(int a, int b)
{
	return (a+b);
}

int substract(int a, int b)
{
	if (a>b)
		return (a-b);
	else if (a<b)
		return (b-a);
	else return 0;
}

int multiply(int a, int b)
{
	return a*b;
}

int divide(int a, int b)
{
	if (a>b && b!=0)
		return a/b;
	else if (a<b && a!=0)
		return b/a;
	else return 1;
}

int main()
{
	vector<F*> ivec;                                               //定义vector的类型为指向F函数的指针。
	int n1, n2;
	cout << "please enter two non-zero number:" << endl;
	cin >> n1 >> n2;
	ivec.push_back(sum);                                           //填写函数名，自动转换为指针
	ivec.push_back(substract);
	ivec.push_back(multiply);
	ivec.push_back(divide);
    for (auto i : ivec)
    	cout << i(n1, n2) <<endl;                                  //通过指针调用函数，无须提前解引用。
    return 0;
}