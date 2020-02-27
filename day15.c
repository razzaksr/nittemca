#include<stdio.h>
#include<string.h>
// Verify not a robot
main()
{
	char user[30]="";int exist=7612, converted=0;
	fgets(user,sizeof(user),stdin);
	//gets(user);
	//scanf("%s",user);
	printf("\n%s\t%d",user,strlen(user));
	sscanf(user,"%d",&converted);
	if(exist==converted)
	{
		printf("\nU r authorised");
	}
	else
	{
		printf("\nU r not suppose to Login");
	}
}
