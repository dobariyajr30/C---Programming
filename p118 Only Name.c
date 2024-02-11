#include<stdio.h>
main()
{
    int no;
    rohan:

        printf("\n Enter Number=> ");
        scanf("%d",&no);

        if(no<0)
        {
            printf("\nSaheb positive only now enter again");
            goto rohan;
        }
        else
        {
            printf("\n square= %d",no*no);
        }
}
