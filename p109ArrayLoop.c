#include<stdio.h>
main()
{
    int i,n=13,s=0;
    int a[100]={11,8,99,33,22,110,45,66,2,21,22,34,22};

    for(i=0; i<n; i++)
    {
        printf(" %d",a[i]);
        s=s+a[i];
    }
     printf("\n Addition is=> %d",s);
}

