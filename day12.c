#include<stdio.h>
main()
{
	int cash=0;
	printf("Tell us amount to withdraw:");
	scanf("%d",&cash);
	printf("\nIf No of 2000's %d",(cash/2000));
	printf("\nIf No of 500's %d",(cash/500));
	printf("\nIf No of 200's %d",(cash/200));
	printf("\nIf No of 100's  %d",(cash/100));
}
