#include<stdio.h>
#include<string.h>
int main()
{
	int fare=0, seat=0, row=0;char temp[30]="",chart[30]="";
	for(row=1;row<=5;row++)
	{
		strcpy(temp,"");
		for(seat=1;seat<=4;seat++)
		{
			printf("\nEnter the money: ");
			scanf("%d",&fare);
			if(fare>=300)
			{
				printf("\nTicket will booked @ %d row %d seat",
				row,seat);
				strcat(temp,"$");
			}
			else
			{
				printf("\nInsufficient to book");
				strcat(temp,"#");
			}
			if(seat%2==0){strcat(temp," ");}
		}
		strcat(temp,"\n");
		strcat(chart,temp);
	}
	printf("\n%s",chart);
	return 0;
}
