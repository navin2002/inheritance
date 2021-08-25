//hiearchical_main.cpp
#include<iostream>
#include "science.h"
#include "student.h"
#include "engineer.h"
#include "arts.h"
#include "engg_research.h"
#include "sci_humanities_research.h"
#include "research.h"

using namespace std;

int main() {
    
	science m1;
	engg_research e1;
	engineer eg1;
	arts i1;
	sci_humanities_research s1;
	int choice=0;
	while (choice != 6) {
		cout << "\n\n\n\n \t\t\t     MENU  \n" ;
		cout << "\n\n       ENTER 1 TO SET AND GET engineering research student INFORMATION" ;
		cout << "\n\n       ENTER 2 TO SET AND GET science student INFORMATION" ;
		
		cout << "\n\n       ENTER 3 TO SET AND GET engineer student INFORMATION" ;
		cout << "\n\n       ENTER 4 TO SET AND GET arts student INFORMATION" ;
			cout << "\n\n       ENTER 5 TO SET AND GET science and humanities student research INFORMATION" ;
		cout << "\n\n       ENTER 6 TO EXIT" ;
	
		cout << "\n\n\n\n          ENTER YOUR CHOICE      :     " ;
		cin >> choice;
		switch (choice) {
	

		case 1:
		
			e1.setter();
			cout<<"\n\n\n\n      The values that have been entered     : \n\n";
			e1.getter();
			break;
			
		case 2:
		
			m1.setter();
			cout<<"\n\n\n\n      The values that have been entered     : \n\n";
			m1.getter();
			break;
			
		case 3:
		
			eg1.setter();
			cout<<"\n\n\n\n      The values that have been entered     : \n\n";
			eg1.getter();
			break;
		case 4:
		
			i1.setter();
			cout<<"\n\n\n\n      The values that have been entered     : \n\n";
			i1.getter();
			break;
			
		case 5:
		
			s1.setter();
			cout<<"\n\n\n\n      The values that have been entered     : \n\n";
			s1.getter();
			break;
			
		case 6: break;
		default:
		
			cout << "\n\n     INVALID CHOICE!!!" ;
		}
	}
	
	return 0;
}
