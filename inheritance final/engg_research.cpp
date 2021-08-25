
#include "engg_research.h"
using namespace std;
#include<string>
#include<iostream>
void engg_research::setter()
{
	engineer::setter();
	research::setter();
	
	cout<<"\n\n\n      entered engg_research::setter()   \n\n";
	
	cout<<"\n\n\n        exiting engg_research::setter()   \n\n";
}

void engg_research::getter() const
{
	engineer::getter();
	research::getter();
	cout<<"\n\n\n      entered engg_research::getter()   \n\n";
	
	cout<<"\n\n\n        exiting engg_research::getter()   \n\n";
	cout << "\n\n\n\n" ;
}
