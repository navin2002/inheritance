#include "Person.h"

void Person::setter()
{
	cout<<"\n\n\n      entered Person::setter()   \n\n";
	cout << "\n\n   enter age of person  :     " ;
	cin >> age;
	cout << "\n\n    enter name of person   : ";
	cin.ignore(10, '\n');
	getline(cin,name);
	cout<<"\n\n\n        exiting Person::setter()   \n\n";

}

void Person::getter() const
{
	
	cout << "\n\n\n               DATA  \n\n\n";
     cout<<"\n\n\n      entered Person::getter()   \n\n";
	cout << "\n\n     age is:    " << age ;
	cout << "\n\n     name IS: " << name ;
	cout<<"\n\n\n        exiting Person::getter()   \n\n";

}
