#include<stdio.h>
void main()
{
	int i,j;
	i=1 ;
	do
	{
		j=13;
		do 
		{
			printf(" ");
		if  (j<=i)
		{
			printf("*");
		}
		j--;
		}while(j>0);
		
		printf("\n");
		
		i++;	
	 }while(i<=7);
}
	


