#include <iostream>

using namespace::std;

void change(int &p1, int &p2)                                      //¶¨ÒåÎªvoidÔò²»ÓÃÐ´·µ»ØÀàÐÍ¡£
{
	int temp;
	temp=p1;
	p1=p2;
	p2=temp;
}

int main()
{
	int i1, i2;
	cout << "please enter two numbers:" << endl;
	cin >> i1 >> i2;
	int &ip1 = i1, &ip2 = i2;
	void change(int&, int&);
	change(ip1, ip2);
	cout <<ip1<<" "<<ip2<< endl;                                  //delete the &, otherwise you will get the addresses other than the number.
	return 0;
}
