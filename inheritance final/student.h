//student.h

#pragma once
#include<iostream>
#include<string>
using namespace std;
class student
{
protected:
	string address;
	int roll;
	float marks;
	char grade;
	string name;
public:
	void setter();
	void getter() const;
};
