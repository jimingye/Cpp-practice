#include <iostream>
#include <string>
#include <vector>

using namespace::std;

int main()
{
	string s1, s2;
	vector<string> svec;
	while (cin >> s1)
	{
		if (s1[0] > 'a' && s1[0] < 'z')                                                    //���ȿ���while��ȡ���ʣ�Ȼ��s1��ֵ��s2��else���֣���֮��������룬ֱ�������ظ��ҷ�Сд���ʣ��ڶ���if���֣�������vector������ִ�С�
			continue;
		if (s1 == s2)
			svec.push_back(s1);
		else
			s2 = s1;
	}
	if (!svec.empty())
	{
		for (auto c: svec)
			cout << "repeated word:" << c << endl;
	}
	else
		cout << "no repeated word exists!" << endl;
	return 0;
}