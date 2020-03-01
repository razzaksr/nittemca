#include<stdio.h>
void penalty(double*,int,int);
int index=0;
int main()
{
	int NUM=0;
	double dues[7]={100000,450000,56000,125000,81000,34000,89600};
	printf("\nSet the minimum due: ");
	scanf("%d",&NUM);
	penalty(dues,7,NUM);
	return 0;
}
void penalty(double *hai,int limit,int take)
{
	if(index>=limit)
		return;
	else
	{
		if(take<*hai)
		{
			
			*hai=(*hai)*0.1+*hai;
			printf("%.1lf\t",*hai);
		}
		else
		{
			printf("%.1lf\t",*hai);
		}
		hai++;
		index++;
		penalty(hai,limit,take);
		
	}
}
