#include<stdio.h>
main()
{
    int i,n=5,k=0;
    int a[5]={12,43,25,57,34};
    int b[5];


    for(i=0; i<n; i++)

    {
    if(a[i]%2==0)
    {
        b[k]=a[i];
        k++;

    }
    }
    for(i=0; i<k; i++)
    {
        printf("\n %d is Even",b[i]);

    }
}
