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
			svec2.push_back(svec1[i]);                                                         //���ظ��ĵ�������svec2���������ظ�������cnt+1������ivec��
			ivec.push_back(cnt + 1);
		}
		else cnt = 0;                                                                          //�����������Ա�����´�ͳ�ơ�
	}
	for (int n = 0; n != svec2.size() - 1; ++n)
	{
		if (svec2[n] != svec2[n + 1])                                                          //�ҳ�svec2�еķ��ظ����ʣ�����ʾ�������
		{
			cout << svec2[n] << '\n' << ivec[n] << endl;
			
		}
		
	}
	cout << svec2[svec2.size() - 1] << '\n' << ivec[ivec.size() - 1] << endl;                  //�������ѭ���޷��ж�svec2�����һ���ظ������Ҫ�����г���
	return 0;
}