#include<stdio.h>
void offer(int*,int);
int index=0;
int main()
{
	int pro_count[15]={3,5,12,7,3,6,10,7,4,2,1,0,5,6,9};
	offer(pro_count,15);
	return 0;
}
void offer(int *team,int limit)
{
	if(index>=limit)
		return;
	else
	{
		if(*team >= 8)
		{printf("\n%d count prmoted to PM",*team);}
		if(*team >= 6&& *team<=12)
		{printf("\n%d gets 10 percent hike",*team);}
		if(*team >= 2 && *team <=7)
		{printf("\n%d count got onsite to UK",*team);}
		team++;index++;offer(team,limit);
	}
}
