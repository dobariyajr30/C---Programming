#include<stdio.h>
main()
{
    int i,n=10,max;
    int a[100]={23,74,24,94,123,623,62,93,14,63};

    max=a[0];

    for(i=0; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("\n Max from the array=. %d",max);
}

