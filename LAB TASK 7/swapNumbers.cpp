#include <iostream>

using namespace std;

// function declaration
void swap(int& x, int& y); 
int main () {

// local variable declaration:
int varA = 25;
int varB = 100;

cout << "Before swap, value of varA :" << varA << endl << endl;
cout << "Before swap, value of varB :" << varB << endl << endl;

/* calling a function to swap the values.*/
swap(varA, varB);
cout << "After swap, value of varA :" << varA << endl << endl;
cout << "After swap, value of varB :" << varB << endl << endl;
return 0;
}

// function definition to swap the values.
void swap(int& x, int& y) {

    int temp;
temp = x; /* save the value at address x */
x = y; /* put y into x */
y = temp; /* put x into y */
return;
}