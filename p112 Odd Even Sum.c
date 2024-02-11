#include<stdio.h>
main()
{
    int i,n=13,se=0,ce=0,so=0,co=0;
    int a[100]={11,7,99,14,22,110,45,66,2,21,22,34,22};

    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            printf("\n Eve %d",a[i]);
            se=se+a[i];
            ce++;
        }
        else
        {
            printf("\n Odd %d",a[i]);
            so=so+a[i];
            co++;
        }
    }
    printf("\n Sum of Even=> %d Sum of Even=> %d",se,ce);
    printf("\n Sum of Odd=> %d Sum of Odd=> %d",so,co);

}
