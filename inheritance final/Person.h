#pragma once
#include<iostream>
#include<string>
using namespace std;

class Person
{
protected:
	int age;
	string name;

public:
	void setter();
	void getter() const;
};

