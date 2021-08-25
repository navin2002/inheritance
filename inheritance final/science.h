//science.h
#pragma once
#include "student.h"
using namespace std;
#include<string>
class science:virtual public student
{
private:
	string stream_name;
    
public:
	void setter();
	void getter() const;
};

