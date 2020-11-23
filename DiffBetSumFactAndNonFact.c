/*
	Problem Statement: Write a program which accept number from user and return difference between summation of all its factors and non factors.
	Input  :  12
	Output : -34 (16 - 50)

	Input  :  10
	Output : -29 (8 - 37)
*/

#include<stdio.h>	// Header File

/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name: 		FactDiff
//	Input Parameters:	Integer
//	Return Value:		  Integer
//	Description: 		  It is used to display the difference between summation of all its factors and non factors
//	Author Name:		  Shubham Mukund Deshmukh
//	Date:			        01 August 2020
//
////////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
	
	int iCnt1=0;		//First Counter
	int iSum1=1;		//First addition of Factors
	
	int iCnt2=0;		//Second Counter	
	int iSum2=0;		//Second addition of non factors
	
	int iRes=0;			//Final Result variable
	
	if(iNo<0)			//Input Updater
	{
		iNo=-iNo;
	}
	
	if(iNo==0)			//Input Filter
	{
		return 0;
	}
	
	for(iCnt1=2; iCnt1<=iNo/2; iCnt1++)	
	{
		if(iNo%iCnt1==0)					//For Factors
		{
			iSum1=iSum1+iCnt1;				//Summation of Factors
		}
	}
	
	
	for(iCnt2=1; iCnt2<=iNo-1; iCnt2++)
	{
		if(iNo%iCnt2!=0)					//For Non Factors
		{
			iSum2=iSum2+iCnt2;				//Summation of non factors
		}
	}
	
	iRes = (iSum1-iSum2);
	
	return iRes;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter a number:\n");
	scanf("%d",&iValue);

	iRet = FactDiff(iValue);

	printf("%d",iRet);

	return 0;
}
