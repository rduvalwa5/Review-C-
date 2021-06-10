/*
 * StrLength.cpp
 *
 *  Created on: Jun 6, 2021
 *      Author: rduvalwa2
 */

#include <iostream>
#include <string>

using namespace std;

int main(){

// Concatenate
	string fname = "John";
	string lname = "Doe";

	string fullname = fname + " " + lname;
	cout << fullname << endl;

	string nextname = fname.append(lname);

	cout << nextname << endl;

// string length
	string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "The length of the txt string is: " << txt.length() << endl;

	cout << "The length of the txt string is: " << txt.size() << endl;

// pointer to position in a string
	cout << txt[13] << endl;

// replace a part of a string
	txt[13] = 'x';
	cout << txt << endl;

	/*
	 * begin			Return iterator to beginning (public member function )
		end				Return iterator to end (public member function )
		rbegin			Return reverse iterator to reverse beginning (public member function )
		rend			Return reverse iterator to reverse end (public member function )
		cbegin			Return const_iterator to beginning (public member function )
		cend			Return const_iterator to end (public member function )
		crbegin			Return const_reverse_iterator to reverse beginning (public member function )
		crend			Return const_reverse_iterator to reverse end (public member function )
	 */

	// Reverse str[begin..end]
	 reverse(txt.begin(), txt.end());
	 cout << "String reversed "<< txt << endl;

	/* max_size		Return maximum size of string (public member function )
	 * Return maximum size of string
		Returns the maximum length the string can reach.
		This is the maximum potential length the string can reach due to known system or library implementation
		limitations, but the object is not guaranteed to be able to reach that length: it can still fail to allocate
		storage at any point before that length is reached.
	 */
	 std::string str ("Test string");
	 std::cout << "size: " << str.size() << "\n";
	 std::cout << "length: " << str.length() << "\n";
	 std::cout << "capacity: " << str.capacity() << "\n";
	 std::cout << "max_size: " << str.max_size() << "\n";

	 return 0;




}


