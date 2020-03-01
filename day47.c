#include<stdio.h>
void detail(int*,int);
int index=0;
int main()
{
	int pc[5]={50,40,10,20,35};
	detail(pc,5);
	return 0;
}
void detail(int *hai,int limit)
{
	if(index>=limit)
		return;
	else
	{
		printf("%d ",*hai);index++;hai++;
		detail(hai,limit);
	}
}
//void detail(int hai[],int limit)
//{
//	if(index>=limit)
//		return;
//	else
//	{
//		printf("%d ",hai[index]);index++;
//		detail(hai,limit);
//	}
//}
