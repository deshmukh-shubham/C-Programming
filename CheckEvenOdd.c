#include<stdio.h> 		//Used for IO Functions

typedef int BOOLEAN; 		// New data type as BOOLEAN treated as int

#define TRUE 1			//User defined macro
#define FALSE 0			//User defined macro

BOOLEAN ChkEvenOdd(int);	// Function Prototype

#include "Header.h"		// Header file inclusion

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name: 		ChkEvenOdd
//	Input Parameters:	Integer
//	Return Value:		BOOLEAN
//	Description: 		It is used to check no is even or odd
//	Author Name:		Shubham Mukund Deshmukh
//	Date:			20 July 2020
//
////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition

BOOLEAN ChkEvenOdd(int iNO)
{
	int iResult = 0;		// Local Variable
	
	iResult = iNO % 2;		// MOD(%) operstor returns remainder after division

	if(iResult == 1)		// If ramiander is odd number
	{
		return FALSE;
	}
	else
	{
		return TRUE;		// If ramainder is even number
	}	

}


/*

	Problem Statement: Accept a number from user and check wheather the number is even or odd.

*/

/*
	Algorithm
	START
		Accpet number form user as No
		Divide the number by 2 & store remainder into result
		if the result is zero
			then return Even
		Otherwise
			return odd
	END

*/

#include "Header.h"			// Header file inclusion 

// Entry point function where the execution of program starts
int main()
{
	int iValue = 0;
	BOOLEAN iAnswer = FALSE;

	printf("Enter a number:\n");		// Display on screen
	scanf("%d",&iValue);			// Accept input from keyword

	iAnswer = ChkEvenOdd(iValue);		// Function call

	if(iAnswer == TRUE)			// If number is even 
	{
		printf("Given number is Even");
	}
	else
	{
		printf("Given number is odd");	// If number is odd
	}
	
	return 0;				// It indicates the successful termination 	
}
