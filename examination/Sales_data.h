#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Sales_data 
{
	Sales_data() = default;
	Sales_data(const std::string& s) :bookNo(s) {}
	Sales_data(const std::string& s, unsigned n, double p) :bookNo(s),united_sold(n),revenue(p*n) {}
	Sales_data(std::istream&is) { read(is, *this); };
	Sales_data(std::ostream& os) { print(os, *this); };
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double arg_price() const;
	std::string bookNo;
	unsigned united_sold = 0;
	double revenue = 0.0;
};

Sales_data& add(const Sales_data& rhs, const Sales_data& ths)
{
	Sales_data sum = ths;
	sum.combine(rhs);
	return sum;
}
std::istream& read(std::istream& is, Sales_data& item)
{
	double price = 0;
	is >> item.bookNo >> item.united_sold >> price;
	item.revenue = price * item.united_sold;
	return is;
}
std::ostream& print(std::ostream& os, const Sales_data& item)
{
	os << item.isbn() << " " << item.united_sold << " " << item.revenue << " " << item.arg_price();
	return os;
}
Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	united_sold += rhs.united_sold;
	revenue += rhs.revenue;
	return *this;
}
double Sales_data::arg_price() const
{
	if (united_sold)
		return revenue / united_sold;
	else
		return 0;
}

#endif