#include<stdio.h>
int main()
{
    int a[10];
    int i;
    int b;
    for(i=0;i<10;i++)
       {
        printf("\n");
        printf(" Enter any number");
        scanf("%d",&a[i]);
       }
    printf(" \n Select a number to get it's array location:\t");
    scanf("%d",&b);
    for(i=0;i<10;i++)
        {
            if(a[i]==b)
              {
                printf(" \n  The position of array is %d",i+1);
                printf("\n");
              }
        }  
 return 0;

}

