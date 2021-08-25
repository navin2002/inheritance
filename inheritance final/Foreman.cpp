#include "Foreman.h"

void Foreman::setter()
{
	Employee::setter();
	cout << "ENTER PAYMENT IN Rs." << endl;
	cin >> payment;
}

void Foreman::getter() const
{
	Employee::getter();
	cout << "PAYMENT IS: " << payment << endl;
	cout << "----------------------------------" << endl;
}
