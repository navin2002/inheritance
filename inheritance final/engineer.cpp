//engineer.cpp
#include "engineer.h"
using namespace std;
#include<string>
void engineer::setter()
{
	student::setter();
	cout<<"\n\n\n      entered engineer::setter()   \n\n";
	cout << "\n\n   enter engineering stream  :  " ;
		cin.ignore(10, '\n');
	getline(cin,stream_name);
	
	cout<<"\n\n\n        exiting engineer::setter()   \n\n";
}

void engineer::getter() const
{
	student::getter();
	cout<<"\n\n\n      entered engineer::getter()   \n\n";
	cout << "\n\n     engineering stream  is : " <<stream_name ;
	
	cout<<"\n\n\n        exiting engineer::getter()   \n\n";
	cout << "\n\n\n\n" ;
}
