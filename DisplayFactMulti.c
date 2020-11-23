/*
	Problem Statement: Write a program which accept number from user and display its multiplication of factors.
		
	Input  :  12
	Output : 144 (1 * 2 * 3 * 4 * 6)

	Input  :  13
	Output :   1 (1)

	Input  :  10
	Output :  10 (1 * 2 * 5)
*/

/*
	Algorithm
		START
			Accept number from user and store into variable no
				
				Create one counter and initialize to 1
					Create one variable to store the multiplication as mul
					
					Iterate till the counter is less than the number i.e. no/2
						check wheather the cnt divides the no completely
						 if yes 
							perform multiplication and store the result in mul
					Display the multiplication				
		END
*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name:	MultFact
//	Input:	        Integer
//	Output:	        Integer
//	Description:	It is used to perform the multiplication of factors of the number.
//	Date:	        31 July 2020
//	Author Name:	Shubham Mukundrao Deshmukh
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iValue) 
{
	int iCnt=0;				// Used for loop counter
	int iMul=1;				// Used to store the addition of factor
	
	//Filter
	if(iValue==0)				
	{
		return 0;			// If input is zero
	}
	
	// Input Updater
	if(iValue < 0)   		// if the input is negative
	{
		iValue = -iValue;	// Convert that negative number into positive number
	}
	
	for(iCnt=2; iCnt<=iValue/2; iCnt++)
	{
		if((iValue % iCnt) == 0)
		{
			iMul=(iMul*iCnt);			
		}	
	}
	return iMul;
}


////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 	Time Complexity : O(N/2)
// 	Where N is the input for our application
//
/////////////////////////////////////////////////////////////////////////////////////////////

int main()								//Entry Point Funcntion
{
	
	int iNo = 0;
	int iRet=0;
	
	printf("Enter a number:\n");
	scanf("%d",&iNo);
	
	iRet = MultFact(iNo);
	printf("Multiplication of factors is: %d",iRet);
	
	return 0;							// Termination successfully
}
