#include<stdio.h>
void list(double[],int);// fun declared
void alter(double[],int);
int index;
int main()
{
	double height[5]={1800.5,1200.4,620.6,2400.5,1100.5};
	index=0;list(height,5);
	printf("\nafter heavy rain fall");
	index=0;alter(height,5);
	index=0;list(height,5);
	return 0;
}
void alter(double term[],int size)
{
	if(index>=size)
		return;
	else
	{
		if(term[index]>=1500)
		{term[index]-=300;}
		index++;
		alter(term,size);
	}
}
void list(double term[],int size)
{
	if(index>=size)
		return;
	else
	{
		printf("\n%.1lf",term[index]);index++;
		list(term,size);
	}
}
