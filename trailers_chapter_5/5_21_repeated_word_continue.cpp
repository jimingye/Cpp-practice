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
		if (s1[0] > 'a' && s1[0] < 'z')                                                    //首先控制while读取单词，然后将s1赋值给s2（else部分），之后继续输入，直到遇到重复且非小写单词（第二个if部分），存入vector，继续执行。
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