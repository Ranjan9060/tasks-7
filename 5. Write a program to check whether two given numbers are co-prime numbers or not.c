#include<stdio.h>
int main()
{
    int a,b,m,count=0;

    printf("Enter Two Number:");

    scanf("%d%d",&a,&b);
    
    for(m=a>b?a:b;m>=2;m--)
    {
        if(a%m==0 && b%m==0)
        {
            count++;
        }
    }
    if(count==0)
    {
       printf("Co-Prime Number");
    }
     else
    {
       printf("Not Co-Prime Number");
    }

    return 0;
   
}