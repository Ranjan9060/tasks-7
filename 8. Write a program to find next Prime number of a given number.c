#include<stdio.h>
int main()
{
    int num,i,j;

    printf("Enter a number: ");

    scanf("%d",&num);

    for(i=num+1; ;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            printf("%d ",i);
              break;
        }
    }
    return 0;
}