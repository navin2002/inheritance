//engineer.h
#pragma once
#include "student.h"
using namespace std;
#include<string>
class engineer:virtual public student
{
private:
	string stream_name;
    
public:
	void setter();
	void getter() const;
};

