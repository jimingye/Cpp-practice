#include <iostream>
#include <vector>

using namespace::std;

int main()
{
	cout << "please enter the texts:" << endl;
	char text;
	vector<char> cvec;
	int ffcnt = 0, flcnt = 0, ficnt = 0, f=0;
	while (cin >> text)
		cvec.push_back(text);
	for (int index = 0; index != cvec.size() - 1; ++index)
	{
		if (cvec[index] == 'f' && cvec[index + 1] == 'l')
			++flcnt;
		if (cvec[index] == 'f' && cvec[index + 1] == 'i')
			++ficnt;
		if (cvec[index] == 'f' && cvec[index + 1] == 'f')                             //�˷��������ж϶������ֵ�ff���и�����
			++ffcnt;
	}
	/*for (int index1 = 0; index1 != cvec.size() - 2; index1+=2)                      //ff���жϡ��������˶ο��Դ����жϳ�����f������ff���ֵĸ������������������±꣬������ƫ�
	{
		if (cvec.size() % 2 != 0)
			cvec.push_back('a');
		if (cvec[index1] == 'f' && cvec[index1 + 1] == 'f')
			++ffcnt;
		if (cvec[cvec.size() - 2] == 'f' && cvec[cvec.size() - 1] == 'f')
			++ffcnt;
	}*/
	cout << ffcnt << flcnt << ficnt << endl;
	return 0;
}