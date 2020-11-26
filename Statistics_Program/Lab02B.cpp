///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: Lab02B.cpp
// Date: September 19th, 2019
// Programmer: Samir Williams           
//
// Description:
//    Reads and parses integers from integers.dat
//                                         
///////////////////////////////////////////////////////////////////////
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	string fileName = "integers.dat";
	ifstream inFile;
	int bigInt = 0;
	int smallInt = 0;
	int intCount = 0;
	int evenCount = 0;
	int oddCount = 0;
	int evenSum = 0;
	int oddSum = 0;
	double bigSmallAvg = 0;
	int totalSum = 0;
	int digitSum = 0;
	int tempInt = 0;

	cout.precision(2);//sets decimal precision ex: 20.00

	//cout << "What is the name of the input file? ";
	//cin >> fileName;//Ask what the difference will be

	inFile.open(fileName, ios::in);
	if (inFile.is_open()) {
		while (!inFile.eof()) {
			inFile >> tempInt;
			if (bigInt == 0 && smallInt == 0) {
				bigInt = tempInt;
				smallInt = tempInt;
			}
			intCount++;
			totalSum += tempInt;
			if (tempInt > bigInt) {
				bigInt = tempInt;
			}
			if (tempInt < smallInt) {
				smallInt = tempInt;
			}
			if (tempInt % 2 == 0) {
				evenCount++;
				evenSum += tempInt;
			}
			else {
				oddCount++;
				oddSum += tempInt;
			}
			while (tempInt > 0) {
				digitSum += tempInt % 10;
				tempInt /= 10;
			}
		}
		bigSmallAvg = ((double)bigInt + (double)smallInt) / 2;
	}

	cout << "The number of integers in the file is " << intCount << endl;
	cout << "There are " << oddCount << " odd integers and " << evenCount << " even integers\n";
	cout << "The sum of the odd integers is " << oddSum << endl;
	cout << "The sum of the even integers is " << evenSum << endl;
	cout << "The sum of all integers is " << totalSum << endl;
	cout << "The largest integer is " << bigInt << endl;
	cout << "The smallest integers is " << smallInt << endl;
	cout << "The average of " << bigInt << " and " << smallInt << " is "<< fixed << bigSmallAvg << endl;
	cout << "The sum of all the digits is " << digitSum << endl ;
	

	inFile.close();
	system("pause");
	return 0;
}