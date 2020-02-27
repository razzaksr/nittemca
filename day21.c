#include<stdio.h>
main()
{
	int stock=15, noOfOrder=0, hours=10, each=0;
	while(stock>0&&hours>0)
	{
		printf("\nTell us quantity of mobile: ");
		scanf("%d",&each);
		if(each<=stock)
		{
			stock-=each;noOfOrder++;
			printf("\nOrder Placed with %d mobile's",
			each);
		}
		else
		{
			printf("\nOut Of Stock");
		}
		hours--;
	}
	printf("\nSale Closed @ %d hours with %d orders",
	hours,noOfOrder);
}
