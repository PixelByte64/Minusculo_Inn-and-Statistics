///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: Lab1A.cpp
// Date: September 19th, 2019
// Programmer: Samir Williams           
//
// Description:
//    Asks for the number of rooms and displays the amenitites
//                                                          
///////////////////////////////////////////////////////////////////////
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	int roomEntered = 0;

	//For user ease of use
	cout << "Rooms available:\n" << "Room 101, 102, 103, 104, 201, 202, 203, 204\n";

	cout << "Please enter a room number: ";
	cin >> roomEntered;

	//Checks what integer is entered from roomEntered
	switch (roomEntered) {
		case 101:
			cout << "Room " << roomEntered << " has 1 King Size Bed" << endl;
			break;
		
		case 102:
		case 103:
		case 104:
			cout << "Room " << roomEntered << " has 2 Double Beds" << endl;
			break;
		
		case 201:
		case 202:
			cout << "Room " << roomEntered << " has 1 Queen Size Bed" << endl;
			break;
		
		case 203:
		case 204:
			cout << "Room " << roomEntered << " has 1 Double beed and 1 Sofa Bed" << endl;
		
		default:
			cout << "Input Error" << endl;
	}

	system("pause");
	return 0;
}