
#include<string>
#include<vector>
#include"Sales_data.h"
#include<iterator>
#include<cstdlib>
#include"Person.h"
using namespace std;
int main()
{
	Sales_data total(std::cin);
	if (!total.isbn().empty())
	{
		Sales_data trans(std::cin);
		while (!trans.isbn().empty())
		{
			if (total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		std::cerr << "No data" << endl;
		return -1;
	}
	return 0;
}
