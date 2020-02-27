#include<stdio.h>
main()
{
	int seats=0, fare=0, age=0;
	for(seats=1;seats<=30;seats++)
	{
		printf("\nBring the amount and tell us ur age:");
		scanf("%d%d",&fare,&age);
		if(seats%3==0&&age>=50&&fare>=250)
		{
			printf("\nLower birth Seat %d will be booked"
			,seats);
		}
		else if(fare>=250&&seats%3!=0)
		{
			printf("\nSeat %d will be booked",seats);
		}
		else
		{
			printf("\ncan't allocate the seat");
		}
	}
}
