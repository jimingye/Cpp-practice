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
sales_data add(const sales_data&, const sales_data&);
ostream &print(ostream&, const sales_data&);
istream &read(istream&, sales_data&);

sales_data& sales_data::combine(const sales_data &rhs)
{
	unit += rhs.unit;
	revenue += rhs.revenue;
	return *this;
}

sales_data add(const sales_data &lhs, const sales_data &rhs)
{
	sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

istream &read(istream &is, sales_data &item)
{
	double price = 0;
	is>>item.bookNo>>price>>item.unit;
	item.revenue = price * item.unit;
	return is;
}

ostream &print(ostream &os, const sales_data &item)
{
	os<<item.isbn()<<' '<<item.unit<<' '<<item.revenue;
	return os;
}

int main()
{
	sales_data total;
	sales_data trans;
	cout<<"please enter book number, price, and sale units:"<<endl;
	if (read(cin,total))
	{
		while(read(cin,trans))
		{
		    if (trans.isbn()==total.isbn())
		    {
			    //total.combine(trans);
			    total = add(trans, total);                           //add与combine相同功能。
		    }
		    else
		    {
		    	print(cout,total)<<endl;
			    total=trans;
		    }
	    }
	print(cout,total)<<endl;
    }
    return 0;
}