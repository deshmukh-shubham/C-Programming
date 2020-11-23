/*
	Problem Statement: Write a program which accept number from user and print even factors of that number.
	Input : 24
	Output: 1 2 4 6 8 12
*/

/*
	Algorithm
		START
				Accept a number from user as iValue
					Check wheather the number is negative or not
						if negative
							then convert it into positive
						Also Check wheather given factor is positive or not
						if even then
						Display the factors 
		END
*/

#include<stdio.h>				//Header File

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function name: DisplayFactor
//	Input:         Integer
//	Output:        None
//	Description:   It is used to display even factors of given number.
//	Date:          31st July 2020
//	Author Name:   Shubham Mukundrao Deshmukh
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
	int i = 0;
	
	if(iNo <= 0)						//Input Updater
	{
		iNo = -iNo;
	}
	

	for(i = 1; i<= iNo/2; i++)
	{
		if((iNo%i==0) && (i%2==0))		//Logical AND (&&) Operator used to satisfy both conditions
		{
			printf("%d ",i);
		}
	}
}

int main()
{
	int iValue = 0;					//Local Variable Initialize to 0
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	DisplayFactor(iValue);
	
	return 0;
}
