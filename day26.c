#include<stdio.h>
main()
{
    int n,a,b,min,min2,i;
    printf("Enter how many numbers");
    scanf("%d",&n);
     printf("Enter number:");
         scanf("%d",&a);
    printf("Enter number:");
    scanf("%d",&b);
     if(b<a){
         min=b;
         min2=a;

     }
        else{
            min=a;
         min2=b;

        }

    for(i=0;i<n-2;i++)
    {
           printf("Enter number:");
         scanf("%d",&b);
        if(b<min)
         min=b;
        else if(b<min2)
            min2=b;
            a=b;
    }
    printf("min is :%d",min);
    printf("\nmin2 is :%d",min2);

}

