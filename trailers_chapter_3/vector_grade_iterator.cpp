#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<unsigned> score(11, 0);
	unsigned grade;
	cout << "please enter grades:" << endl;
	while (cin>>grade)
	{
		if (grade<=100)
		{
			auto it = score.begin();
			it += (grade / 10);
			++(*it);
		}
	}
	for (auto n : score)
		cout << n << " ";
	return 0;
}