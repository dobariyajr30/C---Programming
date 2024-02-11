#include<stdio.h>
main()
{
    int i,n;
    int a[100];

    printf("\n Enter Limit=> ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\n Enter Number=> ");
        scanf("%d",&a[i]);
    }
    printf("\nOriginal\n");
     for(i=0; i<n; i++)
    {
        printf(" %d",a[i]);
    }
    printf("\nInverse\n");
    for(i=0; i<n; i++)
    {
        printf(" %d",a[i]*-1);
    }

}
