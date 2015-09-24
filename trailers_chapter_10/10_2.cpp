#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <list>

using namespace::std;

int main()
/*{
	vector <int> ivec = {1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
	auto n = count(ivec.begin(), ivec.end(),4);
	cout << n <<endl;
	return 0;
}*/

{
	list <string> slist = {"asd","asd","asd","asd","asd","asd","asdas","asdasda","asdasdasdasdasd","asdsdsds","ads"};
	auto s = count(slist.begin(), slist.end(), string("asd"));
	cout << s <<endl;
	return 0;
}