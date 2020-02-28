#include<stdio.h>
#include<string.h>
int main()
{
	int row=0,cont=0,space=0;char str[30]="";
	gets(str);
	// row
	for(row=0;row<strlen(str);row++)
	{
		// decides how many space in one row
		for(space=strlen(str)-2;space>=row;space--)
		{printf(" ");}
		// content 
		for(cont=0;cont<=row;cont++)
		{printf("%c ",str[cont]);}
		printf("\n");
	}
	return 0;
}
