#ifndef CP5_ex7_04_h
#define CP5_ex7_04_h
#include<string>
#include<vector>
class Person {
	friend std::istream& read(std::istream&, Person&);
	friend std::ostream& print(std::ostream&, const Person&);
public:
	Person() = default;
	Person(const string n, const string s) :name(n), address(s) {};
	Person(std::istream& is) { read(is, *this); };
	std::string const& get_name() const { return name; }
	std::string const& get_address() const { return address; }
private:
	std::string name;
	std::string address;
};

std::ostream& print(std::ostream& os, const Person& person)
{
	os << person.name << " " <<person.address;
	return os;
}
std::istream& read( std::istream& is, Person& personinfo)
{
	is >> personinfo.address >> personinfo.name;
	return is;
}
#endif