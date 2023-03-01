#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// MAKING MATRIX WITH OUTPUT...
	
	int satir,sutun;
	printf("enter satir: "); scanf("%d",&satir);
	printf("enter sutun: "); scanf("%d",&sutun);
	
	
	int i,j,dizi[satir][sutun];
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("enter an entry[%d][%d]: ",i,j); scanf("%d",&dizi[i][j]);
		}
	}
	printf("\n\n");
	printf("***MATRICE***\n\n");
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
