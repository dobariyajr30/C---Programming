#include<stdio.h>
main()
{
    int rev,no,y;
    rev=0;

    printf("\n Enter Digit=> ");
    scanf("%d",&no);

    while(no>0)
    {
    y=no%10;
    rev=rev+y;
    no=no/10;
    }

    printf("\n Addition Of Number is=> %d",rev);
}
