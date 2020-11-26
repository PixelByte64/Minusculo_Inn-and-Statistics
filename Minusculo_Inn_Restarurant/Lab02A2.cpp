///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: Lab1A.cpp
// Date: September 19th, 2019
// Programmer: Samir Williams            
//
// Description:
//    Asks the user for the combo and then calculates the total
//                                                               
///////////////////////////////////////////////////////////////////////
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

int main() {
	double comboA = 4.25;
	double comboB = 5.75;
	double comboC = 5.25;
	double comboD = 3.75;
	string itemEntered;
	double total = 0;

	//For user ease of use
	cout << "Combos available:\n" << "Combo A: $4.25\n" << "Combo B: $5.75\n" << "Combo C: $5.25\n" << "Combo D: $3.75\n";

	cout.precision(2);//sets decimal precision ex: 20.00

	while (itemEntered != "T") {
		cout << "Enter item ordered [A/B/C/D] or T to calculate total: ";
		cin >> itemEntered;

		//Checks to see if the entered value is something that we can use
		if (itemEntered == "T") {
			cout << fixed << "Please pay this amount: $" << total << endl;
		}
		else if (itemEntered == "A") {
			total += comboA;
		}
		else if (itemEntered == "B") {
			total += comboB;
		}
		else if (itemEntered == "C") {
			total += comboC;
		}
		else if (itemEntered == "D") {
			total += comboD;
		}
		else {
			cout << "Please enter [A/B/C/D] or T to calculate total!" << endl;
		}	
	}

	system("pause");
	return 0;
}