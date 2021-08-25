//reserach.cpp
#include "research.h"
#include<iostream>
using namespace std;
#include<string>
void research::getter() const
{
    cout << "\n\n\n               DATA  \n\n\n";
	cout<<"\n\n\n      entered research::getter()   \n\n";
	cout << "\n\n     thesis_grade is:    " << thesis_grade ;
	cout << "\n\n     specialization topic is: " << topic;


	cout<<"\n\n\n        exiting research::getter()   \n\n";
	cout << "\n\n\n" ;
}

void research::setter()
{

    cout<<"\n\n\n      entered research::setter()   \n\n";
	cout << "\n\n   enter thesis_grade of student  :     " ;
	cin >> thesis_grade;
	cout << "\n\n    enter specialization topic of student  : ";
	cin.ignore(10, '\n');
	getline(cin,topic);
	cout<<"\n\n\n        exiting research::setter()   \n\n";
	cout << "\n\n\n" ;
}
