#include <stdio.h>
#include <math.h>
#include <stdlib.h>


typedef enum {
   false = 0,
   true = 1
} bool;

int main(){
	
	bool flag = true;
	
	while(flag)
	{
		int choice;
		printf("\n\n************\n");
		printf("MENU\n");
		printf("************\n");
		
		printf("1. ADDITION\n");
		printf("2. MULTIPLICATION\n");
		printf("3. SUBTRACTION\n");
		printf("4. DIVISION\n");
		printf("5. ABSOLUTE VALUE\n");
		printf("6. SQUARE OF NUM\n");
		printf("7. CUBE OF NUM\n");
		printf("8. AREA OF TRIANGLE\n");
		printf("9. EXIT\n\n");
		
		printf("Choose an option: "); scanf("%d",&choice);
		int s1,s2,s3,result=0;
		float f1,f2,fresult=0;
		double taban,area_t;
		
		switch(choice)
		{
			case 1:
				
				printf("1. enter number: "); scanf("%d",&s1);
				printf("2. enter number: "); scanf("%d",&s2);
				result = s1+s2;
				printf("The addition = %d",result);
				break;
				
			case 2:
			 	
				printf("1. enter number: "); scanf("%d",&s1);
				printf("2. enter number: "); scanf("%d",&s2);
				result = s1*s2;
				printf("The multiplication = %d",result);
				break;
			
			case 3:
				printf("1. enter number: "); scanf("%d",&s1);
				printf("2. enter number: "); scanf("%d",&s2);
				result = s1-s2;
				printf("The subtraction = %d",result);
				break;
				
			case 4:
				printf("1. enter number: "); scanf("%d",&f1);
				printf("2. enter number: "); scanf("%d",&f2);
				fresult = s1/s2;
				printf("The division = %d",fresult);
				break;
			
			case 5:
				printf("1. enter number: "); scanf("%d",&s1);
				result = abs(s1);
				printf("The absolute value = %d",result);
				break;
			
			case 6:
				printf("1. enter number: "); scanf("%d",&s1);
				result = s1*s1;
				printf("The square = %d",result);
				break;
			
			case 7:
				printf("1. enter number: "); scanf("%d",&s1);
				result = s1*s1*s1;
				printf("The cube = %d",result);
				break;
				
			case 8:
				printf("1. enter number: "); scanf("%d",&s1);
				printf("2. enter number: "); scanf("%d",&s2);
				printf("3. enter number: "); scanf("%d",&s3);
				taban = ((s1+s2+s2)/2)*((s1+s2+s3)/2-s1)*((s1+s2+s3)/2-s2)*((s1+s2+s3)/2-s3);
				area_t = pow(taban,0.5);
				printf("The area of triangle = %lf",area_t);
				break;
				
			
			
			case 9:
				printf("PROGRAM IS TERMINATING...");
				getch();
				flag = false;
				break;
		}
		
	}
	
	return 0;
}

