/*
	Problem Statement: Write a program which accept number from user and display all its non factors.
	Input : 12
	Output : 5 7 8 9 10 11

	Input : 13
	Output : 2 3 4 5 6 7 8 9 10 11 12

	Input : 10
	Output : 3 4 6 7 8 9
*/

/*
	Algorithm
		START
			Create one counter as Cnt and initialize as 0
			Check given number is negative or not
				if negative then convert it into positive
			Start iteration from 0 upto no-1
			Check wheather the cnt divides no completely
			if no
				display the number
			Continue	
		END
*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name:	NonFact
//	Input:				  Integer
//	Output:				  None
//	Description:		It is used to accept number from user and display all its non factors.
//	Date:				    01 August 2020
//	Author Name:		Shubham Mukundrao Deshmukh
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
	int iCnt=0;
	
	
	//Input Updator
	if(iNo < 0)
	{
		iNo=-iNo;
	}
	
	//Filter
	if(iNo==0 || iNo==1)
	{
		return;
	}
	
	for(iCnt=1; iCnt<=iNo-1; iCnt++)
	{
		if(iNo%iCnt!=0)
		{
			printf("%d ",iCnt);
		}
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter  a number\n");
	scanf("%d",&iValue);
	
	NonFact(iValue);
	
	return 0;
}
