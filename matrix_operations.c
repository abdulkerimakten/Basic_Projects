#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
	bool flag = true;
	while(flag)
	{
		printf("\n\n\n***** WELCOME TO MATRIX OPERATIONS *****\n\n");
		printf("1--> MATRIX ADDITION\n");
		printf("2--> MATRIX MULTIPLICATION\n");
		printf("3--> EXIT\n");
		printf("************************************************\n");
		
		int choice;
		printf("___Which operation would you like to do ?___\n"); scanf("%d",&choice);
		
		
		if(choice==1)
		{
			int ai,aj,bi,bj;
			label1:
				
				printf("enter size for ai of a: "); scanf("%d",&ai);
				printf("enter size for aj of a: "); scanf("%d",&aj);
				printf("enter size for bi of b: "); scanf("%d",&bi);
				printf("enter size for bj of b: "); scanf("%d",&bj);
			
			
				if(ai==bi && aj==bj)
				{
			
					int a[ai][aj],b[bi][bj],i,j;
					int toplam[ai][bj];
	
					for(i=0;i<ai;i++)
					{	
						for(j=0;j<aj;j++)
						{
							printf("enter entery for matris a[%d][%d]: ",i,j); scanf("%d",&a[i][j]);
						}		
					}
	
					for(i=0;i<bi;i++)
					{
						for(j=0;j<bj;j++)
						{		
							printf("enter entery for b[%d][%d]: ",i,j); scanf("%d",&b[i][j]);
						}
					}	
		
					for(i=0;i<ai;i++)
					{
						for(j=0;j<bj;j++)
						{
							toplam[i][j] = a[i][j] + b[i][j];
						}
					}
					printf("\n----MATRICE A----\n");
					for(i=0;i<ai;i++)
					{
						for(j=0;j<aj;j++)
						{
							printf("%d ",a[i][j]);
						}
						printf("\n");
					}
	
					printf("\n----MATRICE B----\n");
					for(i=0;i<bi;i++)
					{
						for(j=0;j<bj;j++)
						{
							printf("%d ",b[i][j]);
						}
						printf("\n");
					}	
	
					printf("\n----MATRICE toplam----\n");
					for(i=0;i<ai;i++)
					{
						for(j=0;j<bj;j++)
						{
							printf("%d ",toplam[i][j]);
						}
						printf("\n");
					}
				}	
				else
				{
					printf("NOTE: To add two matrices, size of rows and columns of the  matrices are must be equal to each other.\n\n");
					printf("Please enter valid values...\n\n");
					goto label1;
				}
		}
		
		
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		
		else if(choice==2)
		{
			printf("**************************************************\n");
			printf("---- MULTIPLICATION MENU ----\n");
			printf("1--> MULTIPLICATION OF TWO MATRICES\n");
			printf("2--> MULTIPLICATION OF A MATRIX AND A CONSTANT\n");
			printf("3--> MAIN MENU\n");
			printf("**************************************************\n");
			int choice2;
			printf("What type of multiplication would you like to do? : "); scanf("%d",&choice2);
	
	
	
			if(choice2==1)
			{
				int ai,aj,bi,bj;
				label2:
		
					printf("enter size for ai of a: "); scanf("%d",&ai);
					printf("enter size for aj of a: "); scanf("%d",&aj);
   					printf("enter size for bi of b: "); scanf("%d",&bi);
   					printf("enter size for bj of b: "); scanf("%d",&bj);

   				if(aj==bi)
   				{
      					int a[ai][aj], b[bi][bj], i, j, k;
      					int product[ai][bj];

      					for(i=0;i<ai;i++)
      					{
         					for(j=0;j<aj;j++)
         					{
            						printf("enter entry for matrix a[%d][%d]: ",i,j); scanf("%d",&a[i][j]);
         					}
      					}

      					for(i=0;i<bi;i++)
      					{
         					for(j=0;j<bj;j++)
         					{
         						printf("enter entry for matrix b[%d][%d]: ",i,j); scanf("%d",&b[i][j]);
         					}
      					}
        

      					for(i=0;i<ai;i++)
      					{
         					for(j=0;j<bj;j++)
         					{
            						product[i][j]=0;
							for(k=0;k<aj;k++)
            						{
               							product[i][j] += a[i][k]*b[k][j];
            						}
         					}	
      					}

      					printf("\n---- MATRIX A ----\n");
      					for(i=0;i<ai;i++)
      					{
         					for(j=0;j<aj;j++)
         					{
            						printf("%d ",a[i][j]);
         					}
         					printf("\n");
      					}

      					printf("\n---- MATRIX B ----\n");
      					for(i=0;i<bi;i++)
      					{
         					for(j=0;j<bj;j++)
         					{
            						printf("%d ",b[i][j]);
         					}
         					printf("\n");
      					}

      					printf("\n---- PRODUCT MATRIX ----\n");
      					for(i=0;i<ai;i++)
      					{
         					for(j=0;j<bj;j++)
         					{
            						printf("%d ",product[i][j]);
         					}
         					printf("\n");
      					}
   				}

   				else
   				{
   	   				printf("NOTE: The size of one row of one matrix must be equal to the size of one column of the other matrix!!!\n");
      					printf("enter valid values...\n\n");
      					goto label2;
   				}
			}
   
   
   			else if(choice2==2)
   			{
				int ai,aj,constant;
		
				printf("enter size for ai of a: "); scanf("%d",&ai);
				printf("enter size for aj of a: "); scanf("%d",&aj);
				printf("enter a value for constant: "); scanf("%d",&constant);
		
				int a[ai][aj], i, j;
      				int product[ai][aj];

      				for(i=0;i<ai;i++)
      				{
        				for(j=0;j<aj;j++)
         				{
            					printf("enter entry for matrix a[%d][%d]: ",i,j); scanf("%d",&a[i][j]);
         				}
      				}
		
				for(i=0;i<ai;i++)
				{
					for(j=0;j<aj;j++)
					{
						product[i][j]=0;
						product[i][j] = constant * a[i][j];
					}
				}
		
				printf("\n---- MATRIX A ----\n");
      				for(i=0;i<ai;i++)
      				{
         				for(j=0;j<aj;j++)
         				{
            					printf("%d ",a[i][j]);
         				}
         				printf("\n");
   				}
   	
   	
   				printf("\n---- PRODUCT MATRIX ----\n");
      				for(i=0;i<ai;i++)
      				{
         				for(j=0;j<aj;j++)
         				{
            					printf("%d ",product[i][j]);
         				}
         				printf("\n");
      				}
			}
			
			
			else if(choice2==3)
			{
				printf("GOING BACK TO MAIN MENU...");
				continue;
			}
		}
		
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		
		else if(choice==3)
		{
			printf("PROGRAM IS TERMINATED\n");
			flag = false;
		}
		
		else
		{
			printf("\nPLEASE CHOOSE AN OPTION...\n");
		}
	}
	
	
	return 0;
}
