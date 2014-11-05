#include <iostream>
#include <string>

using namespace::std;

/*int main()
{
	cout << "please enter the grade:" << endl;
	int grade;
	while (cin >> grade)
	{
		string finalgrade = (grade >= 90) ? "high pass" : (grade >= 60 && grade <= 75) ? "low pass" : (grade < 60) ? "fail" : "pass";
		cout << finalgrade << endl;
	}
	return 0;
}*/

int main()
{
	cout << "please enter the grade" << endl;
	int grade;
	while (cin >> grade)
	{
		if (grade >= 60)
		{
			if (grade > 90)
				cout << "high pass" << endl;
			if (grade >= 60 && grade < 75)
				cout << "low pass" << endl;
			else if (grade >= 75 && grade <=90)                  //若仅仅使用else则会产生“垂直else”问题。或将if if else改为if else if else结构。
				cout << "pass" << endl;
		}
		else if (grade < 60)
			cout << "fail" << endl;
	}
	return 0;
}