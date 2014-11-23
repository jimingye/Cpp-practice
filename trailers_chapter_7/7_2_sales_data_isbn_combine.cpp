#include <iostream>

using namespace::std;

struct sales_data
{
	string isbn() const {return bookNo;}
	sales_data &combine(const sales_data&);
	string bookNo;
    unsigned unit=0;
	double revenue=0.0;
};

sales_data& sales_data::combine(const sales_data &rhs)
{
	unit += rhs.unit;
	revenue += rhs.revenue;
	return *this;
}

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
		    if (trans.isbn()==total.isbn())
		    {
			    total.combine(trans);
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