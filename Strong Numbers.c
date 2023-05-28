// Write a program that prints out all the strong numbers from 1 to n. 
// (Strong number: 145= 1! + 4! + 5!)
// Program must be written using at least two functions other than main function.
// n must be given by the user.
// User is expected to follow the rules (n must be a positive integer)
// The program should continue as long as the user wishes.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int fact(int f)
{
	if (f == 0)
		return 1;
	else
		return f*fact(f-1);
}


bool is_SN(num)
{
	int orginal = num;
	int sum = 0;
	
	while(num>0)
	{
		sum += fact(num%10);
		num = num/10;
	}
	
	if(sum==orginal)
		return true;
	else
		return false;
	
}


int show_SN(n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(is_SN(i))
		{
			printf("%d ",i);
		}
	}
}



int main()
{
	
	char ask = 'Y';
	
	while( (ask == 'y') || (ask == 'Y'))
	{
		
		int number;
		printf("To what value do you want to know ? : "); scanf("%d",&number);
		
		show_SN(number);
		
		printf("\nDo you want to continue ? : "); scanf(" %c",&ask);
	}
	return 0;
}
