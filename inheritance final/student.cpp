//student.cpp

#include "student.h"
using namespace std;
#include<string>
#include<iostream>
void student::setter()
{

     	cout<<"\n\n\n      entered student::setter()   \n\n";
	cout << "\n\n   enter grade of student  :     " ;
	cin >> grade;
	cout << "\n\n    enter name of student   : ";
	cin.ignore(10, '\n');
	getline(cin,name);
	cout << "\n\n    enter roll of student   :  " ;
	cin >> roll;
	cout << "\n\n   enter address OF student   :    " ;
	cin.ignore(10, '\n');
	getline(cin,address);
	cout << "\n\n    enter marks of the student    :    " ;
	cin >> marks;
	cout<<"\n\n\n        exiting student::setter()   \n\n";
}

void student::getter() const
{
    cout << "\n\n\n               DATA  \n\n\n";
	cout<<"\n\n\n      entered student::getter()   \n\n";
	cout << "\n\n     grade is:    " << grade ;
	cout << "\n\n     name IS: " << name ;


	cout << "\n\n    roll is    :   " << roll ;
	cout << "\n\n    address is  :   " << address ;
	cout << "\n\n    marks is :   " << marks ;
	cout<<"\n\n\n        exiting student::getter()   \n\n";
	cout << "\n\n\n" ;
}
