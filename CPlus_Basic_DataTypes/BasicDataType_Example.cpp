/*
 * BasicDataType_Example.cpp
 *
 *  Created on: Jun 6, 2021
 *      Author: rduvalwa2
 *
 *      Data Type	Size	Description
		int	4 bytes	Stores whole numbers, without decimals
		float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits
		double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
		boolean	1 byte	Stores true or false values
		char	1 byte	Stores a single character/letter/number, or ASCII values
 *
 *
 */

#include <iostream>
#include <string>
using namespace std;


int main(){
	int myNum = 5;               // Integer (whole number)
	float myFloatNum = 5.99;     // Floating point number
	double myDoubleNum = 9.98;   // Floating point number
	char myLetter = 'D';         // Character
	bool myBoolean = true;       // Boolean
	string myText = "Hello";     // String

	cout << myNum << endl;
	cout << myFloatNum << endl;
	cout << myDoubleNum << endl;
	cout << myLetter << endl;
	cout << myBoolean << endl;
	cout << myText << endl;

	float f1 = 35e3;
	double d1 = 12E4;
	cout << f1 << endl;
	cout << d1 << endl;

	bool isCodingFun = true;
	bool isFishTasty = false;
	cout << isCodingFun << endl;  // Outputs 1 (true)
	cout << isFishTasty << endl;  // Outputs 0 (false)

	char myGrade = 'B';
	cout << myGrade << endl;

	char a = 65, b = 66, c = 67;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

}


