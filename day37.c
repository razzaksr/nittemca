#include<stdio.h>
void hai()__attribute__((constructor));
void bye()__attribute__((destructor));
void hai()
{
	printf("\nJashmitha going to the Play ground");
}
int main()
{
	printf("\nJashmitha going to canteen");
	return 0;
}
void bye()
{
	printf("\nJashmitha going to class");
}
