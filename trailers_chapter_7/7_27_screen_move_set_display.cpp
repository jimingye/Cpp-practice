#include <iostream>

using namespace::std;

class screen
{
public:
	typedef string::size_type position;
	screen() = default;
	screen(position ht, position wd): cursor(0), height(ht), width(wd), contents(ht * wd, ' ') {}
	screen(position ht, position wd, char c): height(ht), width(wd), contents(ht * wd, c) {}
	char get() const 
	{
		return contents[cursor];
	}
	char get(position ht, position wd) const;
	screen &move(position r, position c);
	screen &set(char);
	screen &set(position, position, char);
	screen &display(ostream &os)
	{
		do_display(os);
		return *this;
	}
	const screen &display(ostream &os) const
	{
		do_display(os);
		return *this;
	}

private:
	position cursor = 0;
	position height = 0, width = 0;
	string contents;
	void do_display(ostream &os) const 
	{
		os << contents;
	}
};

inline screen &screen::move(position r, position c)
{
	position row = r * width;
	cursor = row + c;
	return *this;
}

inline char screen::get(position r, position c) const
{
	position row = r * width;
	return contents[row + c];
}

inline screen &screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline screen &screen::set(position r, position col, char ch)
{
	contents[r * width + col] = ch;
	return *this;
}

int main()
{
	screen Myscreen(5, 5, 'X');
	Myscreen.display(cout);
	cout << "\n";
	Myscreen.move(4, 0).set('#').display(cout);
	cout << "\n";
	screen myscreen(5, 3, '.');
	myscreen.display(cout);
	cout << "\n";
	myscreen.move(4, 2).set('%').display(cout);
	cout << "\n";
	Myscreen.display(cout);
	cout << "\n";
	return 0;
}