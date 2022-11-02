/*#include<iostream>
#include<string>
#include<vector>
#include"Sales_items.h"
#include"Sales_data.h"
#include<iterator>
#include<cstdlib>
#include"Person.h"
/*using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using Iter = vector<int>::iterator;
typedef int arrT[10];
using arrT = int[10];
using strT = string[10];
int func1(int& a, int& b) { return a + b; }
using pfunc = decltype(func1)*;
inline int add(int& a, int& b) { return a + b; }
inline int minus(int& a, int& b) { return a - b; }
inline int multiply(int& a, int& b) { return a * b; }
inline double divide(int& a, int& b) { return b = 0 ? 0 : a / b; }
bool str_range(const string& str1, const string& str2)
{
	if (str1.size() == str2.size())
		return str1 == str2;
	else
	{
		auto size_limit = (str1.size() <= str2.size()) ? str1.size() : str2.size();
		for (decltype(str1.size())i = 0; i != size_limit; ++i)
		{
			if (str1[i] != str2[i])
				return 0;
		}
		return 1;
	}
}
string make_plural(size_t ctr, const string& word, const string& ending)
{
	return (ctr >= 1) ? word + ending : word;
}
const string& shorterString(const string& str1, const string& str2)
{
	if (str1.size() == str2.size())
	{
		char a;
		cout << "They are the same" << endl;
		cout << "Enter the first char:" << endl;
		cin >> a;
		return(str1[0] == a) ? str1 : str2;
	}
	else
		return (str1.size() < str2.size()) ?str1:str2;
}
int& get_value(int* array, int index) { return array[index];};
char& get_val(string& str, size_t num)
{
	return str[num];
}
int factres( Iter beg,Iter end)
{
	int resm = 1;
	int resa = 0;
	bool tempnum;
	for (auto i = beg; i != end; ++i)
	{
		if (*i == 0)
		{
			tempnum = 1;
		}
		else { tempnum = 0; }
	}
	if (tempnum)
	{
		for (auto be = beg; be != end; ++be)
		{
			resa += (*be);
		}
		return resa;
	}
	else 
	{
		for (auto be = beg; be != end; ++be)
		{
			resm *= (*be);
		}
		return resm;
	}
	
}
int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};
decltype(odd) *judoe(int i)
{
	return (i % 2) ? &odd : &even;
}
auto func(int i)->int(*)[10]
int main()
{
	/*const string storage = "0123456789ABCDEF";
	cout << "Enter a series of numbers between0and 15"
		<< " seperated by spaces" << endl;
	string result;
	string::size_type n;
	while(cin>>n)
		if (n < storage.size())
		{
			result += storage[n];
		}
	cout << result << endl;
	vector<vector<int>> ivec(10, vector<int>(10, 0));
	vector<string> svec;
	string s;
	while (cin >> s)
		svec.push_back(s);
	for (auto d = svec.begin(); d != svec.end() && d->size() == 3; ++d)
	{
		*d = 'a';
	}
	for (auto& f : svec)
		cout << f << endl; 
	int ii = 9;
	decltype(odd)* ia = judoe(ii);
	for (auto elem : *ia)
		cout << elem << endl;
	return 0;
}
using namespace std;

*/