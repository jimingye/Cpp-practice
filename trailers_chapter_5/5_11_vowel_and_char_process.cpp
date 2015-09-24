#include <iostream>
#include <vector>
#include <string>

using namespace::std;

int main()
{
	cout << "please enter the texts:" << endl;
	char c;
	unsigned int vowelcnt1 = 0, vowelcnt2 = 0, vowelcnt3 = 0, vowelcnt4 = 0, vowelcnt5 = 0, spacecnt = 0, tcnt = 0, ncnt = 0;
	while (cin >> std::noskipws >> c)                     //无法使用输入流读取空格，换行与制表符，输入流会将其自动跳过，应使用读取文件来实现。
	{
		switch (c)
		{
		case'a':
		case'A':
			++vowelcnt1;
			break;
		case'e':
		case'E':
			++vowelcnt2;
			break;
		case'i':
		case'I':
			++vowelcnt3;
			break;
		case'o':
		case'O':
			++vowelcnt4;
			break;
		case'u':
		case'U':
			++vowelcnt5;
			break;
		case' ':
			++spacecnt;
			break;
		case'\t':
			++tcnt;
			break;
		case'\n':
			++ncnt;
			break;
		}
	}
	cout << "a&A" << vowelcnt1 << '\n' << "e&E" << vowelcnt2 << '\n' << "i&I" << vowelcnt3 << '\n' << "o&O" << vowelcnt4 << '\n' << "u&U" << vowelcnt5 << '\n' << "space" << spacecnt << '\n' << "\t" << tcnt << '\n' << "\n" << ncnt << endl;
	return 0;
}