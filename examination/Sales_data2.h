#ifndef CP5_ex7_04_h
#define CP5_ex7_04_h
#include<iostream>
#include<string>
using namespace std;
class Sales_data {
	friend Sales_data& add(const Sales_data&, const Sales_data&);
	friend istream& read(istream&, Sales_data&);
	friend ostream& print(ostream&, const Sales_data&);

public:
	Sales_data() = default;
	Sales_data(const string& s, unsigned n, double p) :bookNo(s), united_sold(n), revenue(p* n) {}
	Sales_data(const string& s) :bookNo(s) {}
	Sales_data(istream& is);
	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
private:
	inline double arg_price()const;
	string bookNo;
	double arg_price() const { return united_sold ? revenue / united_sold : 0; }
	unsigned united_sold = 0;
	double revenue = 0.0;
};
Sales_data& add(const Sales_data&, const Sales_data&);
istream& read(istream&, Sales_data&);
ostream& print(ostream&, const Sales_data&);
inline double Sales_data::arg_price()const
{
	return united_sold ? revenue / united_sold : 0;
}
#endif
