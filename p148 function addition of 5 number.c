#include<stdio.h>

void sum(int n1,int n2,int n3 ,int n4,int n5)
{
    printf("\n Addition is %d",n1+n2+n3+n4+n5);
}
main()
{
    int n1,n2,n3,n4,n5;

    printf("\n Enter First Digit=> ");
    scanf("%d",&n1);

    printf("\n Enter Second Digit=> ");
    scanf("%d",&n2);

    printf("\n Enter Second Digit=> ");
    scanf("%d",&n3);

    printf("\n Enter Second Digit=> ");
    scanf("%d",&n4);

    printf("\n Enter Second Digit=> ");
    scanf("%d",&n5);

    sum(n1,n2,n3,n4,n5);


}
