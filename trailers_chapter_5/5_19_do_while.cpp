#include <iostream>
#include <string>

using namespace::std;

int main()
{
	string  s1, s2;
	do 
	{
		cout << "please enter two strings:" << endl;
		cin >> s1 >> s2;
		if (s1.size() < s2.size())
			cout << s1 << endl;
		else cout << s2 << endl;
	} 
	while (cin);                                                //��ִ�����еĳ�����������жϡ��ʽ�if���ַ���do���С�
	return 0;
}