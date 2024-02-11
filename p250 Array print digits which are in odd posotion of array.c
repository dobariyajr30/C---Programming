#include<stdio.h>
main()
{
    int i,n=13;
    int a[100]={-11,-7,99,14,-22,110,-45,66,-2,21,-22,34,22};

    for(i=0; i<n; i++)
    {
        if(i%2==0)
        {
            printf("\n Odd Position Digit's are %d",a[i]);
        }
    }
}


