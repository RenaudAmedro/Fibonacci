// Fibonnaci.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <string>
#include <math.h> 


using namespace std;


int main()
{
	 long double firstNumber = 0;
	 long double secondNumber = 1;
	 long double newNumber;
	while (true)
	{
		newNumber = firstNumber + secondNumber;
		cout << to_string(newNumber) << endl;
		firstNumber = secondNumber;
		secondNumber = newNumber;
		Sleep(0);
		if (isinf(newNumber))
		{
			firstNumber = 0;
			secondNumber = 1;
			newNumber = 0;
		}
	}
    return 0;
}

