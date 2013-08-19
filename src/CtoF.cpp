//============================================================================
// Name        : CtoF.cpp
// Author      : Compton Shumate
// Version     :
// Copyright   : Your copyright notice
// Description : convert temp from C to F
//============================================================================

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <sstream>      // for string stream

using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
	string myInput;
	cout << "Convert Celsius to Farenheit" << endl; // prints Convert Celsius to Farenheit
	char inKey;
	cout << "Press Q key to end program."<< endl;

	// calculate conversion factor for celsius to Fahrenheit
	int factor;
	factor = 212 -32;
	do{
		// enter the temperature in Celsius
		int celsius = 0;
		cout << "Enter the temperature in Celsius:";
		cin >> myInput;
		//gets(myInput);
		//int intLength = strlen(myInput);

		//if( intLength == 1)
		if(isalpha(myInput[0]))
		{
			inKey = tolower(myInput[0]);
		}
		else
		{
			// move the number to the celsius field
			stringstream(myInput) >> celsius;

			// use conversion factor to convert Celsius into Fahrenheit values
			int fahrenheit;
			fahrenheit = factor * celsius/100 + 32;

			// output the results
			cout << endl << "Fahrenheit value is : " << fahrenheit << endl;
		}

		cout << endl;
	} while(inKey != 'q');
	return 0;
}
