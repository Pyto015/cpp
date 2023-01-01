#include <stdio.h>
#include <iostream>

using namespace std;
int COutput()
{
	// for  this we are use stdio.h. This lib can be used in c or c++
	printf("Hello");
	return 0;
}

int CppOutput() {
	// for this we are use iostream lib. This lib use only c++, and to type less we are use using namespace std;
	cout << "Hello" << endl;
	return 0;
}

int NewLineOutput() {
	printf("Hello World \n New Line"); // c new line char is \n 
	cout << "Hello World \n New Line"<< endl; // c++ new line char also \n
	cout << "Hello World"<< endl
			<< "New Line" << endl; // and we can output from new line look like this
	return 0; 
}

int main () {
	COutput();
	CppOutput();
	return 0;
}