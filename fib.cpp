#include <iostream>

using namespace::std;

int main()
{
	int g=1, f=0;
	int n;
	cin >> n;
	while(n > 0)
	{
		g += f;
		f = g - f;
		--n;
		cout << g << ' ' << f << endl;
	}
	return 0;
}