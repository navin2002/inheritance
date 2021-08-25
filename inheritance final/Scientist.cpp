#include "Scientist.h"

void Scientist::setter()
{
	Person::setter();
	cout << "ENTER THE FIELD OF SCIENTIST: " << endl;
	getline(cin,field);
	cout << "ENTER THE NUMBER OF PUBLICATIONS" << endl;
	cin >> noOfPublications;
}

void Scientist::getter() const
{
	Person::getter();
	cout << "FIELD IS: " << field << endl;
	cout << "NO. OF PUBLICATIONS ARE: " << noOfPublications << endl;
	cout << "------------------------------------" << endl;
}
