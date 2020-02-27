#include<stdio.h>

main()
{
	int money=0, period=0;float intrest=6.9F;
	double maturity=0.0;
	printf("\nTell us desired amount and period to deposit:");
	scanf("%d%d",&money,&period);
	maturity=(money*intrest)/100;
	printf("\nYearly wise: %.1lf",(maturity));
	printf("\nYearly twice wise: %.1lf",(maturity/2));
	printf("\nYearly four %.1lf",(maturity/4));
	printf("\nMonthly: %.1lf",(maturity/12));
	maturity=money+maturity*period;
	printf("\nMaturity amount:%.2lf",maturity);
}
