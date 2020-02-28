#include<stdio.h>
#include<string.h>
int main()
{
	int row=0,col=0;char str[30]="";
	gets(str);
	for(row=0;row<strlen(str);row++)
	{
		for(col=0;col<strlen(str);col++)
		{
			if(row==col||(row+col)==strlen(str)-1)
			{printf("%c",str[col]);}
			else{printf(" ");}
		}
		printf("\n");
	}
	return 0;
}

