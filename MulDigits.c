/*
	Problem Statement: Write a program which accept number from user and return multiplication of all digits.
	Input : 2395
	Output : 270

	Input : 1018
	Output : 8

	Input : 9440
	Output : 144

	Input : 922432
	Output : 864
*/

/*
	Algorithm
		START
			Accept one number from user and store as no
				Create one counter as cnt annd initialize to 0
					create one mul variabhle to store the multiplication and initialize to 1
					Iterative til no is not equal to zero
						Divide the number by 10 and store the result in no itself
						if digit is 0 
							add the mul with digit
						otherwise
							multiplay mul and digit and result stored in mul itself
					Continue
					
					Return the mul
		END
*/

#include<stdio.h>     //Header file

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name: 		MultDigits
//	Input Parameters:	Integer
//	Return Value:		integer
//	Description: 		It is used to return the multiplication of all digits .
//	Author Name:		Shubham Mukund Deshmukh
//	Date:				04 August 2020
//
////////////////////////////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)		//250
{
	int iDigit=0;
	int iMul=1;					//1	5	10
	
	//Filter					//Filter to handle 0 as a input
	if(iNo == 0)
	{
		return 0;	
	}
	
	//Input Updater
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{		
		iDigit=iNo%10;			//0 5	2
		if(iDigit!=0)
		{
			iMul = iMul * iDigit;
		}
		iNo = (iNo/10);		
	}	
	return iMul;				//10
}

//Entry point Function
int main()
{

	int iValue=0;						//Initialize to 0
	int iRet=0;					
	
	printf("Enter a number:\n");
	scanf("%d",&iValue);
	
	iRet=MultDigits(iValue);				//Function Call
	
	printf("%d",iRet);
  
	return 0;						//Successfull termination of program
}
