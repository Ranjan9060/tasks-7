#include<stdio.h>
int main()
{
    int num,s=0,rem,a;

    printf("Enter a Number :");

    scanf("%d",&num);
    a=num;
    while(num!=0)
    {
        rem=num%10;

        s=s+(rem*rem*rem);

        num=num/10;
    }
    if(s==a)
    {
       printf("Armstrong Number ");
    }
    else
    {
       printf("Not Armstrong Number ");
    }

    return 0;

}