#include <iostream>
#include <string>

using namespace::std;

string make_plural(size_t cnt, const string &word, const string &ending = "s")           //设置&ending为默认实参。
{
	return (cnt > 1) ? word + ending : word;
}

int main()
{
	const string s1 = "success";
	const string s2 = "failure";
	cout << make_plural(2, s1, "es")<< endl;                                             //因为success复数形式以es结尾，所以重新设定默认实参。 
	cout << make_plural(2 ,s2)<< endl;
	return 0;
}