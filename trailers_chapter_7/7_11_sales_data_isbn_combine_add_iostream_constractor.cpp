#include <iostream>

using namespace::std;

struct sales_data
{   
	
	sales_data() = default;
	sales_data(const string &s): bookNo(s) {}
	sales_data(const string &s, unsigned n, double p): bookNo(s), unit(n), revenue(p * n) {}
	sales_data(istream &); 
	string isbn() const {return bookNo;}
	sales_data &combine(const sales_data&);
	string bookNo;
    unsigned unit=0;
	double revenue=0;
};
sales_data add(const sales_data&, const sales_data&);
ostream &print(ostream&, const sales_data&);
istream &read(istream&, sales_data&);

sales_data::sales_data(istream &is)
{
    read (is, *this);
}  

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
    sales_data data1;                                                //默认构造函数
    sales_data data2("99-99999-99");                                 //bookNo构造函数
    sales_data data3("99-99999-99", 2, 3.5);                         //bookNo, unit, revenue构造函数
    sales_data data4(cin);                                           //istream构造函数
    print(cout, data1)<<endl;
    print(cout, data2)<<endl;
    print(cout, data3)<<endl;
    print(cout, data4)<<endl;
    return 0;
}