// find min in N series
#include<stdio.h>
#include<limits.h>
int main()
{
	printf("%d",INT_MAX);
	// 78 88 12 45
	int limit=0,data=0,min=INT_MAX, smin=INT_MAX;
	printf("\nTell us N: ");
	scanf("%d",&limit);
	while(limit>0)
	{
		printf("\nEnter the data: ");
		scanf("%d",&data);
		// first min
		if(min>data)
			{smin=min;min=data;}
		// sec min
		if(smin>data && data!=min )
			{smin=data;}
		limit--;
	}
	printf("\nMin is: %d and second %d",min,smin);
	return 0;
}
