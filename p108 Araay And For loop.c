#include<stdio.h>
main()
{
    int i,n,s=0;
    int a[100];

    printf("\n Enter Limit=> ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\n Enter Number=> ");
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("\n %d",a[i]);
        s=s+a[i];
    }
     printf("\n Addition is=> %d",s);
}
