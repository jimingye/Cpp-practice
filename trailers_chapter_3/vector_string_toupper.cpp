#include<iostream>
#include<string>
#include<cctype>
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
	while (cin>>word)
	{
		text.push_back(word);
	}
	for (auto s : text)
	{
		for (auto &c : s)
		{
			c = toupper(c);
		}
		cout << s << endl;
	}
	return 0;
}