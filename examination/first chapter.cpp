/*#include<iostream>
#include<string>
#include<cstdlib>
#include"Sales_items.h"
#include"Sales_data.h"
typedef double wages, & p, * P;
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	/*Sales_item total;
	if (std::cin >> total)
	{
		Sales_item trans;
		while (std::cin >> trans)
		{
			if (total.isbn() == trans.isbn())
			{
				total += trans;
			}
			else
			{
				cout << total << endl;
				total = trans;
			}
		}
		std::cout << total << endl;
	}
	else
	{
		cout << "No data?" << endl;
		return -1;
	}
	return 0;
	
	Sales_data data1, data2;
	double price = 0;
	cin >> data1.bookNo >> data1.united_sold >> price;
	data1.revenue = data1.united_sold * price;
	cin >> data2.bookNo >> data2.united_sold >> price;
	data2.revenue = data2.united_sold * price;
	if (data1.bookNo == data2.bookNo)
	{
		unsigned total_united_sold = data1.united_sold + data2.united_sold;
		double total_revenue = data1.revenue + data2.revenue;
		cout << data1.bookNo << " " << total_united_sold << " " << total_revenue<<endl;
		if (total_united_sold != 0)
		{
			cout << "mean price " << (total_revenue / total_united_sold) << endl;
			return 0;
		}
		else
		{
			std::cerr << "Data must refer to the same ISBN" << endl;
			return -1;
		}
	}
}*/