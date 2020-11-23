/*
	Problem Statement: Write a program which accept one number from user and print that number of even numbers on screen.
	Input : 7
	Output: 2 4 6 8 10 12 14
*/

/*
	Algorithm
		START
			Accept a number from user
				Create a counter as cnt
			Check wheather the given number is negative 
				if negative then
					Convert it into posiitve
			Iterate a Counter From 2 upto No*2
				if Cnt % 2 == 0 then
				Display the number
		END
				
*/

#include<stdio.h> 

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name: 	PrintEven
//	Input: 			    Integer
//	Output: 		    None
//	Description: 	  It it used to display even numbers of given number.
//	Date: 			    31 July 2020
//	Author Name: 	  Shubham Mukundrao Deshmukh
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
	int iCnt=1;
	
	if(iNo <= 0)						//Input Updater
	{
		iNo=-iNo;
	}
	
	if((iNo==0) ||(iNo==1))				//Filter
	{
		return;
	}
	
	for(iCnt=2; iCnt<=iNo*2; iCnt++)		
	{
		if(iCnt % 2 == 0)					
		{
				printf("%d ",iCnt);
		}
	}
}

//Entry Point Function
int main()
{
	int iValue = 0;					// Local Variable
	
	printf("Enter number\n");		//Display
	scanf("%d",&iValue);			
	
	PrintEven(iValue);				//Function Call
	
	return 0;						//Termination os successful program
}
