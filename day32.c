#include<stdio.h>
#include<string.h>
int main()
{
	int panel=0, cand=0;char name[30]="",skill[30]="";
	char temp[30]="", report[30]="";
	for(cand=1;cand<=2;cand++)
	{
		strcpy(temp,"");
		for(panel=1;panel<=2;panel++)
		{
			printf("\nTell us name and skill: ");
			scanf("%s%s",name,skill);
			//sprintf(name,"%c",name[0]);
			strcat(temp,name);
			strupr(skill);
			if(strcmp(skill,"PYTHON")==0||
			strcmp(skill,"C")==0||strcmp(skill,"JAVA")==0)
			{
				printf("You got placed by %d\n",panel);
				strcat(temp,"/ ");
			}
			else
			{
				printf("\nUpdate your skill\n");
				strcat(temp,"X ");
			}
		}
		strcat(temp,"\n");
		strcat(report,temp);
	}
	puts(report);
	return 0;
}
