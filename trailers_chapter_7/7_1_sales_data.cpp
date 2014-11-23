#include <iostream>

using namespace::std;

struct sales_data
{
	string bookNo;
	unsigned unit=0;
	double revenue=0.0;
};

int main()
{
	sales_data total;
	sales_data trans;
	double price=0;
	cout<<"please enter book number, price, and sale units:"<<endl;
	if (cin>>total.bookNo>>price>>total.unit)
	{
		total.revenue=price * total.unit;
		while(cin>>trans.bookNo>>price>>trans.unit)
		{
				trans.revenue=price * trans.unit;
		    if (trans.bookNo==total.bookNo)
		    {
			    total.unit += trans.unit;
			    total.revenue += trans.revenue;
		    }
		    else
		    {
		    	cout<<total.bookNo<<' '<<total.unit<<' '<<total.revenue<<endl;
			    total.unit=trans.unit;
			    total.revenue=trans.revenue;
			    total.bookNo=trans.bookNo;
		    }
	    }
	cout<<total.bookNo<<' '<<total.unit<<' '<<total.revenue<<endl;
    }
    return 0;
}