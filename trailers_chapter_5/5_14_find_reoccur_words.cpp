#include <iostream>
#include <vector>
#include <string>

using namespace::std;

int main()
{
	vector<string> svec1;
	vector<string> svec2;
	vector<int> ivec;
	string text;
	int cnt = 0;
	cout << "please enter the sentences:" << endl;
	while (cin>>text)
	{
		svec1.push_back(text);
	}
	for (int i = 0; i != svec1.size() - 1; ++i)
	{
		if (svec1[i] == svec1[i + 1])
		{
			++cnt;
			svec2.push_back(svec1[i]);                                                         //将重复的单词输入svec2，并将其重复次数（cnt+1）输入ivec。
			ivec.push_back(cnt + 1);
		}
		else cnt = 0;                                                                          //将计数清零以便进行下次统计。
	}
	for (int n = 0; n != svec2.size() - 1; ++n)
	{
		if (svec2[n] != svec2[n + 1])                                                          //找出svec2中的非重复单词，并显示其计数。
		{
			cout << svec2[n] << '\n' << ivec[n] << endl;
			
		}
		
	}
	cout << svec2[svec2.size() - 1] << '\n' << ivec[ivec.size() - 1] << endl;                  //因上面的循环无法判断svec2的最后一个重复项，所以要单独列出。
	return 0;
}