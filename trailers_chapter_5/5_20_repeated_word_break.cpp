#include <iostream>
#include <string>

using namespace::std;

int main()
{
	string s1, s2;
	while (cin>>s1)
	{
		if (s1 == s2)    //首先控制while读取单词，然后将s1赋值给s2（else部分），之后继续输入，直到遇到重复单词（if部分），然后跳出while，继续执行。
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