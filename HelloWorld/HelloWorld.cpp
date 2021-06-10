#include <iostream>
using namespace std;
// single line comment
int main() {
	const int myNumber = 15;  // "constant" means unchangeable and read-only
 	cout << "// single line comment\n"; 
   	cout << "Hello World!";
   	cout << "Hello World! 2nd line";
   	cout << "\n \\n Real third line is added by using \\n.\n";
   	cout << "/* Multiline comment */\n";
 //  	myNumber = 20;

   	cout << " Resetting variable myNumber = 20 triggers error \n 1 error generated.\nmake: *** [HelloWorld.o] Error 1make all terminated with exit code 2. Build might be incomplete.\n";

   	cout << myNumber;
  	return 0;
}
