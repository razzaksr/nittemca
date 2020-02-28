#include<stdio.h>
int index,capacity[5];
void push(int limit)
{
	if(limit>5||index==limit)
		return;
	else
	{
		printf("\nEnter engine CC:");
		scanf("%d",&capacity[index]);index++;
		push(limit);
	}
}
void iterate()
{
	if(index==5)
		return;
	else
	{
		printf("\n%d",capacity[index]);index++;
		iterate();
	}
}
