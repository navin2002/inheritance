//arts.h
#pragma once
#include "student.h"
using namespace std;
#include<string>
class arts:virtual public student
{
private:
	string stream_name;
    
public:
	void setter();
	void getter() const;
};




