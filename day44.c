#include<stdio.h>
void enhance(int*,int);
void optimized(int*,int*);
void list(int*,int);
int index;
int main()
{
	int milage[10]={45,89,25,50,55,40,35,20,50,60};
	//index=0;enhance(milage,10);index=0;list(milage,10);
	optimized(&milage[0],&milage[9]);
	index=0;list(milage,10);
	return 0;
}
void optimized(int *start,int *end)
{
	if(start>=end)
		return;
	else
	{
		*start ^= *end;*end ^= *start; *start ^= *end;
		start++;end--;optimized(start,end);
	}
}
void list(int *hai,int limit)
{
	while(index<limit)
	{
		printf("%d ",hai[index]);index++;
	}
	printf("\n");
}
void enhance(int *hai,int limit)
{
	while(index<limit)
	{
		hai[index]^=hai[limit-1];hai[limit-1]^=hai[index];
		hai[index]^=hai[limit-1];
		index++;limit--;
	}
}
