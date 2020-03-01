#include<stdio.h>
void find(float[],int,int);// to find water tanks
int index;
int main()
{
	int required=0;
	float tanks[10]=
{800.5F,1000.5,450.6,1200.5,100.6,1000.6,250.6,780.4,1002.5,720.3};
	printf("\nTell us how many litres you want: ");
	scanf("%d",&required);index=0;
	find(tanks,10,required);
	return 0;
}
void find(float temp[],int size,int need)
{
	if(index>=size)
		return;
	else
	{
		if(temp[index]>=need)
		{
printf("\nThe need of %d litres you can get from: %d",
			need,(index+1));
		}
		index++;find(temp,size,need);
	}
}
