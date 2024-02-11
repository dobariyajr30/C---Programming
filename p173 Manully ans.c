#include<stdio.h>
main()
{
    int i,n1,n2,q;

    for(;;)
    {
        printf("\n Enter 1st Digit=>");
        scanf("%d",&n1);

        printf("\n Enter 2nd Digit=>");
        scanf("%d",&n2);

        printf("\n What is Addition of 1st and 2nd digit=>");
        scanf("%d",&q);

        if(q==n1+n2)
        {
            printf("\n You'r right");
        }
        else
        {
            printf("\n You'r Wrong");
        }
    }


}
