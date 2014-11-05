#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	string word;
	vector<string> text;
	while (cin >> word)
	{
		text.push_back(word);
	}
	for (auto s = text.begin(); s != text.end(); ++s)
	{
		for (auto c = s->begin(); c != s->end(); ++c)
		{
			*c = toupper(*c);
		}
		cout << *s << endl;
	}
	return 0;
}