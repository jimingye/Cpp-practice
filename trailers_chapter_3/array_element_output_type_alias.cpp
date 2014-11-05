#include <iostream>
#include <cstddef>

using std::cin;
using std::cout;
using std::endl;

/*
int main()                                                     //范围for。
{
int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
using int_array = int[4];                  //定义类型别名。
for (int_array &row:ia)                   //选取row，将其定义为引用。
{
for (int &col: row)
{
cout << col <<" ";
}
}
return 0;
}*/

/*
int main()                                                  //普通for，使用下标。
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
int main()                                                   //普通for，使用指针。
{
int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
using int_array = int[4];                  //定义类型别名。
for (int_array*p = ia;p !=ia+3;++p) //int_array*p相当于auto p。
{
for (int*q=*p; q !=*p+4; ++q)                        //int*q相当于auto q。
{
cout << *q << " ";
}
}
return 0;
}*/