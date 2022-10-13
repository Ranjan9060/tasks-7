#include<stdio.h>
int main()
{
    int num,temp,sum=0,rem;

    printf("All Armstrong numbers under 1000\n");

    printf("__________________________________\n");

    for(num=1;num<1000;num++)

  {
       temp=num;

       sum=0;

       while(temp!=0)
    {
        rem=temp%10;

        sum=sum+(rem*rem*rem);

        temp=temp/10;
        
    }
    if(sum==num)
    {
        printf("%d ",num);
    }
  }

  return 0;
   
}