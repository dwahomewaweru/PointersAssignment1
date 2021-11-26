// PointersAssignment1.cpp 
// C++ program to perform certain pointer tasks.


#include <iostream>
using namespace std;

int main()
{
	double number1 = 7.3; //Declare and intialize number1 variable
	double number2; //Declare number2 variable
	double *ptr; //Declare a double pointer variable
	ptr = &number1; //Assign pointer variable to address of variable number1

	cout << "The value of the object pointed to by ptr : "; //Print the value of the object pointed to by ptr
	cout << *ptr << endl;

	number2 = *ptr; //Assign variable number2 the value of the object pointed to by ptr (using ptr variable)

	cout << "\nThe address of number1 : "; //Print the address of variable number1
	cout << &number1 << endl;

	cout << "\nThe address stored in ptr : "; //Print the address stored in ptr
	cout << ptr << endl; 
	//Value printed will be same as the address of the number


}