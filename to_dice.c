#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*

--> Receive a number from user.
--> The number indicates how many times the dice will be rolled.
--> After the dice are rolled, the number of times which side comes is printed on the console.

*/

int main(){
	
	int dice;
	int times; printf("How many times do you want to roll the dice? : "); scanf("%d",&times);
	int result_of_dices[6][2]={{1,0},{2,0},{3,0},{4,0},{5,0},{6,0}};
	int min=1,max=6;
	srand(time(NULL));
	
	int i;
	for(i=0;i<times;i++)
	{
		dice = rand() %(max-min+1)+min;
		switch(dice)
		{
			case 1:
				result_of_dices[0][1]++;
				break;
			case 2:
				result_of_dices[1][1]++;
				break;
			case 3:
				result_of_dices[2][1]++;
				break;
			case 4:
				result_of_dices[3][1]++;
				break;
			case 5:
				result_of_dices[4][1]++;
				break;
			case 6:
				result_of_dices[5][1]++;
				break;
				
		}
	}
	
	int sum=0; // to show sum of each thrown dice.
	for(i=0;i<6;i++)
	{
		printf("number of %d: %d\n",i+1,result_of_dices[i][1]);
		sum+=result_of_dices[i][1];
	}
	printf("sum of throwns: %d",sum);
	
	
	return 0;
}
