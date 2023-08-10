#include <iostream>
#include "header.h"

using namespace std;

int main() {

	int option;
	double num, converted_num;
	
	do {	
		cout << "MENU" << endl;
		cout << "1. Convert centimeters to inches" << endl;
		cout << "2. Convert inches to centimeters" << endl;
		cout << "3. Exit" << endl;
		cout << "Enter an option" << endl;
		cin >> option;
	
	
	//in case the cin is not an int
	while (!cin){
		cin.clear();
		cin.ignore (100, '\n');
		cout << "Invalid entry, please re-enter an option" << endl;
		cin >> option;
	}
	
	switch (option){
		
		case 1:
			cout << "Enter the centimeters you'd like to convert: " << endl;
			cin >> num;
			
			while (!cin){
			cin.clear();
			cin.ignore (100, '\n');
			cout << "Invalid entry, please re-enter an option" << endl;
			cin >> num;		
			}
			
			converted_num = centtoinch(num);
			cout << num << " centimeter(s) is " << converted_num << " inches" << endl;
			break;
			
		
		case 2:
			cout << "Enter the inches you'd like to convert: " << endl;
			cin >> num;
			
			while (!cin){
			cin.clear();
			cin.ignore (100, '\n');
			cout << "Invalid entry, please re-enter an option" << endl;
			cin >> num;		
			}
			
			converted_num = inchtocenti(num);
			
			cout << num << " inch(s) is "<< converted_num << " centimeters" << endl;
			break;
			
		case 3:
			cout << "Good Bye" << endl;
			break;
		
		//in case the cin is not an int option from the menu 
		default:
			cout << "Invalid entry, please re-enter an option" << endl;
		}
	}
	while (option != 3 );
	
	return 0;
	
}



