#include<stdio.h>
main()
{
	int machine=30000, trans=1, required=0;
	for(trans=1;trans<=3;trans++)
	{
		printf("\nTell us rerquired amount: ");
		scanf("%d",&required);
		if(required>machine||required%2000!=0)
		{continue;}
		else
		{
			machine-=required;
			printf("\n %d debited",required);
		}
	}
	printf("\nAvailable balance is: %d",machine);
}
