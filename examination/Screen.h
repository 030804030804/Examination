#include<iostream>
#include<string>
#include<vector>
class Screen {
public:
	void some_number()const;
	typedef std::string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd) :height(ht), width(wd), contents(ht* wd, ' ') {}
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht* wd, 'c') {}
	char get() const { return contents[cursor]; }
	Screen& display(std::ostream& os) { do_display(os); return *this; }
	const Screen& display(std::ostream& os)const { do_display(os); return *this; }
	inline char get(pos , pos ) const;
	Screen& move(pos ,pos );
	Screen& set(char );
	Screen& set(pos, pos, char);
private:
	mutable size_t access_ctr;
	pos cursor=0;
	pos height = 0;
	pos width = 0;
	std::string contents;
	void do_display(std::ostream& os)const { os << contents; }
};
void Screen::some_number()const
{
	++access_ctr;
}
inline
Screen& Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}
char Screen::get(pos r, pos c) const
{
	pos row = r * width;
	return contents[row + c];
}
Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}
Screen& Screen::set(pos r, pos l, char c)
{
	contents[r * width + l] = c;
	return *this;
}
class Window_mgr {
private:
	std::vector<Screen>screens{ Screen(24, 80, 'c') };
};
int main()
{
	Screen myscreen;
	char ch = myscreen.get();
	myscreen.move(4, 0);
	myscreen.set('&');
	Screen temp = myscreen.move(4, 0);
	int i = 9;
	int y = 9;
	const int* ii = &i;
	
}