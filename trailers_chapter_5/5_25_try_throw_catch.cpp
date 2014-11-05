#include <iostream>
#include <stdexcept>

using namespace::std;

int main()
{
	int i1, i2;
	cout << "please enter two numbers:" << endl;
	while (cin>>i1>>i2)
	{
		try
		{
			if (i2 == 0)
				throw runtime_error("the second number cannot be zero!");
			cout << i1 / i2 << endl;
		}
		catch (runtime_error err)
		{
			cout << err.what()
				<< "\nenter again? Y or N?" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}
	}
    return 0;
}

