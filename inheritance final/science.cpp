//science.cpp
#include "science.h"
using namespace std;
#include<string>
#include<iostream>
void science::setter()
{
	student::setter();
	cout<<"\n\n\n      entered science::setter()   \n\n";
	cout << "\n\n   science stream name  :  " ;
	cin.ignore(10, '\n');
	getline(cin,stream_name);

	cout<<"\n\n\n        exiting science::setter()   \n\n";
}

void science::getter() const
{
	student::getter();
	cout<<"\n\n\n      entered science::getter()   \n\n";
	cout << "\n\n    science stream name is   " << stream_name ;
	
	cout<<"\n\n\n        exiting science::getter()   \n\n";
	cout << "\n\n\n\n" ;
}
