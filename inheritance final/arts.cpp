//arts.cpp
#include "arts.h"
using namespace std;
#include<iostream>
#include<string>
void arts::setter()
{
	student::setter();
	cout<<"\n\n\n      entered arts::setter()   \n\n";
	cout << "\n\n   enter language name   :  " ;
		cin.ignore(10, '\n');
	getline(cin,stream_name);
	
	cout<<"\n\n\n        exiting arts::setter()   \n\n";
}

void arts::getter() const
{
	student::getter();
	cout<<"\n\n\n      entered arts::getter()   \n\n";
	cout << "\n\n     language name: " <<stream_name ;

	cout<<"\n\n\n        exiting arts::getter()   \n\n";
	cout << "\n\n\n\n" ;
}
