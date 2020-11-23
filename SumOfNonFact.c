/*
	Problem Statement: Write a program which accept number from user and return summation of all its non factors.
	Input : 12
	Output : 50

	Input : 10
	Output : 37
*/

/*
	Algorithm
		START
			Create a Counter as Cnt asnd initiaize to 0
			create a variable sum to store the addition
		END
		
*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name:	SumNonFact
//	Input:				  Integer
//	Output:				  Integer
//	Description:		It is used to accept number from user and return summation of all its non factors.
//	Date:				    01 August 2020
//	Author Name:		Shubham Mukundrao Deshmukh
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
	int iCnt=0;
	int iSum=0;
	
	//Input Updator
	if(iNo<0)
	{
		iNo=-iNo;
	}

	//Filter
	if(iNo==0)
	{
		return 0;
	}
	
	for(iCnt=1; iCnt<=iNo-1; iCnt++)
	{
		if(iNo%iCnt!=0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter a number:\n");
	scanf("%d",&iValue);

	iRet = SumNonFact(iValue);

	printf("%d",iRet);

	return 0;
}
