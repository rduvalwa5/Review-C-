/*
 * ConcatenationExample.cpp
 *
 *  Created on: Jun 6, 2021
 *      Author: rduvalwa2
 */


#include <iostream>
#include <string>
using namespace std;

int main(){

	string fname = "John";
	string lname = "Doe";

	string fullname = fname + " " + lname;
	cout << fullname << endl;

	string nextname = fname.append(lname);

	cout << nextname << endl;

//	string error = 1 + "string";
//	count << error


}
