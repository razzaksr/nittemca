#include<stdio.h>
#include<string.h>
main()
{
	char status1[100]="",status2[100]="",status3[100]="";
	int cash=0,twos=3,fives=5,hundreds=50, temp=0;
	printf("Tell us the required amount:");
	scanf("%d",&cash);
	// decide to dispense the 2000's or not
	if(twos>0)
	{
		if(twos>=(cash/2000))
		{
			temp=(cash/2000);
			cash-=(temp*2000);
			twos-=temp;
			sprintf(status1,"No of 2000's are: %d\n",temp);
		}
		else
		{
			cash-=(twos*2000);
			sprintf(status1,"No of 2000's are: %d\n",twos);
			twos=0;
		}
	}
	// decide to dispense the 500's or not
	if(fives>0 && cash>0)
	{
		if(fives>=(cash/500))
		{
			temp=(cash/500);
			cash-=(temp*500);
			fives-=temp;
			sprintf(status2,"No of 500's are: %d\n",temp);
		}
		else
		{
			cash-=(fives*500);
			sprintf(status2,"No of 500's are: %d\n",fives);
			fives=0;
		}
	}
	// decide to dispense the 100's or not
	if(hundreds>0 && cash>0)
	{
		if(hundreds>=(cash/100))
		{
			temp=(cash/100);
			cash-=(temp*100);
			hundreds-=temp;
			sprintf(status3,"No of 100's are: %d",temp);
		}
		else
		{
			cash-=(hundreds*100);
			sprintf(status3,"No of 100's are: %d",hundreds);
			hundreds=0;
		}
	}
	if(cash==0){
		strcat(status1,status2);
		strcat(status1,status3);
		puts(status1);
	}else{printf("Insufficient to dispense");}
}
