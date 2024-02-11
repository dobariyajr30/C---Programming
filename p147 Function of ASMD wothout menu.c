#include<stdio.h>
void sum(int n1,int n2)
{
    printf("\n Addition is= %d",n1+n2);
    printf("\n==================");
}
void sub(int n1,int n2)
{

    printf("\n Substraction is= %d",n1-n2);
    printf("\n==================");
}
void mul(int n1,int n2)
{

    printf("\n Multiplication is= %d",n1*n2);
    printf("\n==================");
}
void div(int n1,int n2)
{

    printf("\n Division is= %d",n1/n2);

    printf("\n==================");
}
main()
{
    int n1,n2;

    printf("\n Enter 1st Number=> ");
    scanf("%d",&n1);

    printf("\n Enter 2nd Number=> ");
    scanf("%d",&n2);


        sum(n1,n2);
        sub(n1,n2);
        mul(n1,n2);
        div(n1,n2);

}
