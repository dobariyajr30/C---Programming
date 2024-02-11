#include<stdio.h>
main()
{
    int i,n=5,k=0;
    int a[5]={23,65,73,45,97};
    int b[5]={60,94,12,56,89};
    int c[10];

    for(i=0; i<n; i++)
    {
        c[k]=a[i];
        k++;
    }

    for(i=0; i<n; i++)
    {
        c[k]=b[i];
        k++;
    }
    for(i=0; i<k; i++)
    {
        printf("\n %d",c[i]);

    }
}
