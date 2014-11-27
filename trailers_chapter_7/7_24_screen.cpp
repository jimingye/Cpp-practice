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

private:
	position cursor = 0;
	position height = 0, width = 0;
	string contents;
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