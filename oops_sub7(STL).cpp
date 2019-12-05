// Gr no 21810819 Name : Surabhi Barve

/*Problem statement:Using standard template library (STL) list 
container implement following member functions of list class:
empty, insert, reverse, sort, unique, using iterator.*/


#include<iostream>
using namespace std;
#include <list>
#include <iterator>
using namespace std;

//function for printing the elements in a list
int showlist(list <int> g)
{
	list <int> :: iterator it;
	for(it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

int main()
{

	list <int> l1;

	cout<<"List status:"<<l1.empty();

	for (int i = 0; i < 10; ++i)
	{
		l1.push_back(i * 2);
	}
	cout << "\nList 1 (l1) is : ";
	showlist(l1);
	cout << "\nlist1.front() : " << l1.front();
	cout << "\nlist1.back() : " << l1.back();

	cout << "\nlist1.pop_front() : ";
	l1.pop_front();
	showlist(l1);
	cout << "\nlist1.reverse() : ";
	l1.reverse();
	showlist(l1);
	cout<<"\nSorting():";
	l1.sort();
	showlist(l1);
	cout<<"List status:"<<l1.empty();
	return 0;
}

