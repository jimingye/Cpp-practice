#include <iostream>
#include <cstddef>

using std::cin;
using std::cout;
using std::endl;

/*
int main()                                                     //��Χfor��
{
	int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	for (int (&row)[4]: ia)                                   //ѡȡrow�����䶨��Ϊ���á�
	{
		for (int &col: row)
		{
			cout << col <<" ";
		}
	}
	return 0;
}*/

/*
int main()                                                  //��ͨfor��ʹ���±ꡣ
{
	int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	const size_t rowcnt = 3, colcnt = 4;
	for (size_t i=0; i != rowcnt; ++i)
	{
		for (size_t j=0; j != colcnt; ++j)
		{
			cout << ia[i][j] << " ";
		}
	}
	return 0;
}*/

/*
int main()                                                   //��ͨfor��ʹ��ָ�롣
{
	int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	for (int(*p)[4] = ia; p!= ia + 3; ++p)                   //int��*p)[4]�൱��auto p��
	{
		for (int*q=*p; q !=*p+4; ++q)                        //int*q�൱��auto q��
		{
			cout << *q << " ";
		}
	}
	return 0;
}*/