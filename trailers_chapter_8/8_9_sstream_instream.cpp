#include <iostream>
#include <sstream>

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
	string line;
	while(getline(cin,line))
	{
	istringstream record(line);
	In(record);
	}
	return 0;
}