#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string line, s;
	while (cin >> line)
		s =s + line + ' ';
	cout << s << endl;
	return 0;
}