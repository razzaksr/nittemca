#include<stdio.h>
main()
{
	int stark=0;char peter=' ';
	//scanf("%d%c",&stark,&peter);
	scanf("%d",&stark);
	peter=getche();
	//peter=getchar();
	//peter=getc(stdin);
	
	//printf("\n%d\t%c",stark,peter);
	printf("\n%d\t",stark);
	//putchar(peter);
	putc(peter,stdout);
	
	//stark+=peter;peter=stark-peter;stark-=peter;
	//stark*=peter;peter=stark/peter;stark/=peter;
	stark^=peter;peter^=stark;stark^=peter;
	printf("\n%d\t%c",stark,peter);
}
