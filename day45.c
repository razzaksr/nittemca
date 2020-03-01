#include<stdio.h>
void change(double*,int);
int index=0;
double *comp;
int main()
{
	double exp[10]={2.3,5.6,7.8,1.4,9.5,4.5,10.5,7.8,3.4,7.1};
	change(exp,10);
	return 0;
}
void change(double *temp,int limit)
{
	if(index>=limit)
		return;
	else
	{
		// finding the duplicate
		comp=temp+1;
		while(*comp)
		{
			if(*temp==*comp)
			{*temp= *(temp-1)+1;*comp= *(comp-1)+1;}
			comp++;
		}
		printf("%.1lf ",*temp);
		temp++;index++;change(temp,limit);
	}
}
