#include <iostream>
#include <string>

using namespace::std;

int main()
{
	string s1, s2;
	while (cin>>s1)
	{
		if (s1 == s2)                                                    //���ȿ���while��ȡ���ʣ�Ȼ��s1��ֵ��s2��else���֣���֮��������룬ֱ�������ظ����ʣ�if���֣���Ȼ������while������ִ�С�
			break;
		else
			s2 = s1;
	}
	if (!s1.empty() && s1 == s2)
		cout << "repeated word:" << s1 << endl;
	else
		cout << "no repeated word exists!" << endl;
	return 0;
}