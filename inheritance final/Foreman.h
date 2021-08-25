#pragma once
#include "Employee.h"
class Foreman :
	public Employee
{
private:
	float payment;
public:
	void setter();
	void getter() const;
};

