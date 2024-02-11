#include<stdio.h>
main()
{
    int n,i,c=0;

    printf("\n Enter Digit to Check To Prime or Not=>");
    scanf("%d",&n);

    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("it's prime Number");
    }
    else
    {
     printf("It's Not Prime Number");
    }
}

