#include <iostream>
#include <vector>
#include <string>

using namespace::std;

int main()
{
	cout << "please enter the texts:" << endl;
	unsigned int vowelcnt = 0;
	char alphabet;
	while (cin>>alphabet)
	{
		if (alphabet=='a')
			++vowelcnt;
		if (alphabet=='e')
			++vowelcnt;
		if (alphabet=='i')
			++vowelcnt;
		if (alphabet=='o')
			++vowelcnt;
		if (alphabet=='u')
			++vowelcnt;
	}
	cout << vowelcnt << endl;
	return 0;
}
