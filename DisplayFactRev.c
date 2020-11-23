/*
	Problem Statement: Write a program which accept number from user and display its factors in decreasing order.
	Input : 12
	Output : 6 4 3 2 1

	Input : 13
	Output : 1

	Input : 10
	Output : 5 2 1
*/

/*
	Algorithm
		START
			Create one counter as iCnt and initialize to 0
				Start from No/2 and decrement the counter
				Iterate 
				check wheather the counter completely divides the given number
				if yes
					display the counter value
				Continue	
		END
*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name:	FactRev
//	Input:				  Integer
//	Output:				  None
//	Description:		It is used to accept number from user and display its factors in decreasing order.
//	Date:				    31 July 2020
//	Author Name:		Shubham Mukundrao Deshmukh
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
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

	for(iCnt=iNo/2; iCnt>0; iCnt--)
	{
		if(iNo%iCnt==0)
		{
			printf("%d ",iCnt);
		}
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter a number:\n");
	scanf("%d",&iValue);

	FactRev(iValue);

	return 0;	
}
