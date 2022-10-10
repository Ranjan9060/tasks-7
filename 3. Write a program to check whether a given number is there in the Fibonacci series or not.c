#include<stdio.h>
int main()
{
    int num,i,a=1,b=0,c=0;

    printf("Enter a Number :");

    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        c=a+b;
        if(c==num)
     {
        printf("Fibonic series");
         return 0;
     }
         a=b;

         b=c;
     }
       if(c!=num)
     {
        printf("Not fibonic series");
       
     }
   
    return 0;

}