#include<stdio.h>
main()
{
    int i,j,l;

    printf("\n Enter Limit=>");
    scanf("%d",&l);
    char ch='a';

    for(i=1; i<=l; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i%2==0)
            {
                printf("%c",ch);
                ch++;
            }
            else
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
}
