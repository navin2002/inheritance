//sci_humanities_research.cpp
#include "sci_humanities_research.h"
using namespace std;
#include<string>
#include<iostream>
void sci_humanities_research::setter()
{
	arts::setter();
	research::setter();
	
	cout<<"\n\n\n      entered sci_humanities_research::setter()   \n\n";
	
	cout<<"\n\n\n        exiting sci_humanities_research::setter()   \n\n";
}

void sci_humanities_research::getter() const
{
	arts::getter();
	research::getter();
	cout<<"\n\n\n      entered sci_humanities_research::getter()   \n\n";
	
	cout<<"\n\n\n        exiting sci_humanities_research::getter()   \n\n";
	cout << "\n\n\n\n" ;
}
