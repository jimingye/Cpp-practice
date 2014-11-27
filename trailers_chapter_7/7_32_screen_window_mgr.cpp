#include <iostream>
#include <vector>

using namespace::std;

class screen
{
	friend class window_mgr;
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

class window_mgr
{
public:
	using screenindex = vector<screen>::size_type;
	void clear(screenindex);

private:
	vector<screen> screens{screen(24, 80, ' ')};
};

void window_mgr::clear(screenindex i)
{
	screen &s = screens[i];
	s.contents = string(s.height * s.width, ' ');
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