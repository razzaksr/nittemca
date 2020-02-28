#include<stdio.h>
#include<string.h>
int main()
{
	int row=0,col=0,count=0;char str[30]="";
	gets(str);
	//for(row=strlen(str)-1;row>=0;row--)
	for(row=0;row<strlen(str);row++)
	{
		for(col=0,count=0;col<strlen(str);col++)
		{
			if((col+row)>=strlen(str)-1)//if(col>=row)
			{printf("%c",str[count]);count++;}
			else{printf(" ");}
		}
		printf("\n");
	}
	return 0;
}
