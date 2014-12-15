#include <iostream>

using namespace::std;

istream &In(istream &in)
{
	int ival;
	while(in >> ival && ! in.eof())
	{
		cout << ival <<endl;
	}
	in.clear();
	return in;
}

int main()
{
	cout << "please enter numbers:" << endl;
	In(cin);
	return 0;
}