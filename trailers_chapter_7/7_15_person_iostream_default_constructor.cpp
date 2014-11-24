struct person
{
	person()=default;                                        //执行默认初始化。
	string name;
	string address;
	string get_name() const 
	{
		return name;
	}
	string get_address() const 
	{
		return address;
	}
};
ostream &print(ostream&, const person&);
istream &read(istream&, person&);

istream &read(istream &is, person &data)
{
	is>>data.name>>data.address;
	return is;
}

ostream &print(ostream &os, const person &data)
{
	os<<data.name<<' '<<data.address;
	return os;
}