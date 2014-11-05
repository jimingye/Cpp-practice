#include <iostream>

using namespace::std; 

void reset(int &i)
{
	i=0;
}

int main()
{
	cout << "please enter a number:"<< endl;
    int j;
    void reset(int &);
    cin>>j;
    reset(j);
    cout<<j<<endl;
    return 0;
}