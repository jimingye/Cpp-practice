#include <iostream>

using namespace::std;

class sales_data
{   friend sales_data add(const sales_data&, const sales_data&);
    friend ostream &print(ostream&, const sales_data&);
	friend istream &read(istream&, sales_data&);                  //调用类外成员函数所以要定义友元。
	
public:
	//sales_data() = default;
	sales_data(const string &s, unsigned n, double p): bookNo(s), unit(n), revenue(p * n) {cout << "using delegating construcotr" << endl;}
	sales_data(): sales_data(" ", 0, 0) {}
	sales_data(const string &s): sales_data(s, 0, 0) {}
	sales_data(istream &is): sales_data()
	{
		read(is, *this);
	}
	string isbn() const {return bookNo;}
	sales_data &combine(const sales_data&);
	
private:
	string bookNo;
    unsigned unit=0;
	double revenue=0;
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
	cout<<"please enter book number, price, and sale units:"<<endl;
	sales_data total(cin);
	sales_data trans(cin);                                          //因为total, trans调用istream构造函数，所以仅可输入两个值。
	if (trans.isbn()==total.isbn())
		{
			//total.combine(trans);
		    total = add(trans, total);                              //add与combine相同功能。
		}
	else
		{
		    print(cout,total)<<endl;
			total=trans;
		}
	print(cout,total)<<endl;
    return 0;
}