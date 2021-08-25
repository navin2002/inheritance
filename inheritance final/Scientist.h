#pragma once
#include "Person.h"
class Scientist :
	public Person
{
private:
	string field;
	int noOfPublications;
public:
	void setter();
	void getter() const;
};

