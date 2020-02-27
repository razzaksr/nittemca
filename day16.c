#include<stdio.h>
#include<string.h>
main()
{
	char direction[30]="";int feet=0;
	gets(direction);scanf("%d",&feet);
	strlwr(direction);
	if(strcmp(direction,"northeast")==0&&feet>110)
	{
		printf("\nFor the %s shutters2 4 6 8 10 opened",
		direction);
	}
	else if(strcmp(direction,"northwest")==0&&feet>=90&&feet<=110)
	{
		printf("\nFor the %s shutters1 3 5 7 9 opened",
		direction);
	}
	else{printf("\nNot in danger so none of opened");}
}
