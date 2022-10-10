#include<stdio.h>
int main()
{
    int num,i,a=1,b=0,c=0;

    printf("Enter a Number :");

    scanf("%d",&num);
   
    for(i=1;i<=num;i++)
    {
         c=a+b;

         a=b;

         b=c;
    }
     printf("Nth Term of the Fibonnaci: %d ",c);

    return 0;

}