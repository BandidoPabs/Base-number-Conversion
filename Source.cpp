//Pablo Salinas
//COSC 2436(20583)
//Assignment 1: Base Number Conversion
//Due Date : 10/12/2016

//Declaring my headers
#include <iostream>


using namespace std;

//Prototyping my functions
void decToOctal(int num);
void decToHexa(int num);


int main() {
	// variables to store the decimal numbers
	int decimalNum, decimalNum2;

	//Basic input of decimal numbers and output of the converted values
	cout << "Enter number in decimal to convert to octal: ";
	cin >> decimalNum;

	cout << endl << "Decimal " << decimalNum << " = ";
	decToOctal(decimalNum);
	cout << " octal" << endl;

	cout << "Enter number in decimal to convert to hexadecimal: ";
	cin >> decimalNum2;

	cout << endl << "Decimal " << decimalNum2 << " = ";
	decToHexa(decimalNum2);
	cout << " hexadecimal" << endl;
	
	system("pause");
	return 0;
}
//Function to convert decimal to Octal
void decToOctal(int num){
	if (num > 0){
		decToOctal(num / 8);
		cout << num % 8;
	}
}
//function to convert decimal to hexadecimal
void decToHexa(int num)
{
	if (num > 0)
	{
		decToHexa(num / 16);
		if ((num % 16) == 10) {
			cout << 'A';
		}
		else if ((num % 16) == 11) {
			cout << 'B';
		}
		else if ((num % 16) == 12) {
			cout << 'C';
		}
		else if ((num % 16) == 13) {
			cout << 'D';
		}
		else if ((num % 16) == 14) {
			cout << 'E';
		}
		else if ((num % 16) == 15) {
			cout << 'F';
		}
		else {
			cout << num % 16;
		}
	}
}


