struct Person;
std::istream &read(std::istream&, Person&);

struct Person {
    Person() = default;
    Person(const std::string sname, const std::string saddr):name(sname), address(saddr){}
    Person(std::istream &is){read(is, *this);}
    
    std::string getName() const { return name; }
    std::string getAddress() const { return address; }
    
    std::string name;
    std::string address;
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