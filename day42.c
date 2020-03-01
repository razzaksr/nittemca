#include<stdio.h>
void update(int);void reflect(int*);
int main()
{
	int ram[5]={6,8,2,4,3};
	update(ram[4]);printf("\nafter update: %d",ram[4]);
	reflect(ram);printf("\n%d after reflect",ram[1]);
	return 0;
}
void reflect(int *temp)
{
	printf("\n%d in reflect",temp[1]);temp[1]--;
	printf("\n%d in reflect",temp[1]);
}
void update(int rec)
{
	printf("\n%d in update",rec);
	rec+=2;printf("\n%d in update",rec);
}
