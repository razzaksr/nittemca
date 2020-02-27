#include<stdio.h>
main()
{
	int machine=30000, trans=1, required=0;
	while(trans<=10)
	{
		printf("\nTell us rerquired amount: ");
		scanf("%d",&required);
		(required<=machine&&required%2000==0)?
		machine-=required:printf("\nCan't withdraw");
		trans++;
	}
	printf("\nAvailable balance is: %d",machine);
}
