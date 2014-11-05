#include <iostream>
#include <vector>
#include <string>

using namespace::std;

/*int main()
{
	cout << "please enter grades:" << endl;
	int grade;
	while (cin>>grade)
	{
		if (grade == 100)
			cout << "A++" << " ";
		else if (grade >= 90 && grade < 100)
			cout << "A" << " ";
		else if (grade < 90 && grade >= 80)
			cout << "B" << " ";
		else if (grade < 80 && grade >= 70)
			cout << "c" << " ";
		else if (grade < 70 && grade >= 60)
			cout << "D" << " ";
		else
			cout << "F" << " ";
	}
	return 0;
}*/

int main()
{
	vector<string> score = { "F", "D", "C", "B", "A", "A++" };
	cout << "please enter grades:" << endl;
	int grade;
	while (cin>>grade)
	{
		string finalgrade = (grade < 60) ? score[0] : (grade >= 60 && grade <= 100) ? score[(grade - 50) / 10] : "please enter the right grade between 0-100";
		cout << finalgrade << " ";
	}
	return 0;
}