#include<stdio.h>
void add()
{
    int n1,n2;

    printf("\n Addition of 2 Number");

    printf("\n Enter first No.=>");
    scanf("%d",&n1);

    printf("\n Enter first No.=>");
    scanf("%d",&n2);

    printf("\n Addition is=> %d",n1+n2);
    printf("\n=============================");

}

void oddeven()
{

    int n1;

    printf("\n Odd Even");

    printf("\n Enter first No.=>");
    scanf("%d",&n1);

    if(n1%2==0)
    {
        printf("\nNo is even");
    }
    else
    {
        printf("\nNo is odd");
    }
       printf("\n=============================");
}

void table()
{
    int n1,i;

    printf("\n Table");

    printf("\n ENter Table No.=> ");
    scanf("%d",&n1);

    for(i=0; i<=10; i++)
    {
        printf("\n %d * %d = %d ",n1,i,n1*i);
    }
       printf("\n=============================");
}
void max2()
{
    int n1,n2;

    printf("\n Maximum Btw 2");

    printf("\n Enter 1srt Number=> ");
    scanf("%d",&n1);

    printf("\n Enter 2nd Number=> ");
    scanf("%d",&n2);

    if(n1>n2)
    {
        printf("\n 1st Number is bigger");
    }
    else if(n1<n2)
    {
        printf("\n 2nd Number is bigger");
    }
    else
    {
        printf("\n Both Are Equal");
    }
       printf("\n=============================");
}

void max3()
{
    int n1,n2,n3;

    printf("\n Enter 1st Digit=> ");
    scanf("%d",&n1);

    printf("\n Enter 2nd Digit=> ");
    scanf("%d",&n2);

    printf("\n Enter 3rd Digit=> ");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3){
        printf("\n Number 1 Max");
    }
    else if(n1<n2 && n2>n3){
        printf("\n Number 2 Max");
    }
    else if(n1<n3 && n2<n3){
        printf("\n Number 3 Max");
    }
    else
    {
        printf("\n All 3 Are Equal");
    }
       printf("\n=============================");
}
void pn()
{
    int n1;

    printf("\n Positive negetive");

    printf("\n Enter 1st digit=> ");
    scanf("%d",&n1);

    if(n1>0)
    {
        printf("\n It's Positive");
    }
    else
    {
        printf("\n It's Negetive");
    }
       printf("\n=============================");

}
void aot()
{
    float h,b;

    printf("\n Area of Triangle");

    printf("\n Enter the Hight=> ");
    scanf("%f",&h);

    printf("\n Enter the Base=> ");
    scanf("%f",&b);

    printf("\n Area Of triangle is=> %.2f",0.5*h*b);
    printf("\n");
}
void aoc()
{

    float r;

    printf("\n Area of Circle");

    printf("\n Enter the Redius=> ");
    scanf("%f",&r);

    printf("\n Area of the circle=> %.2f",3.14*r*r);
       printf("\n=============================");
}
void fac()
{
    int i,n,s=1;

    printf("\n Factorial");

    printf("\n Enter the limit=> ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf(" * %d",i);
        s=i*s;
    }
    printf("\n Factorial %d",s);
    printf("\n");
       printf("\n=============================");

}
void cube()
{
    int i,l;

    printf("\n Enter the limit for Cube=>");
    scanf("%d",&l);

    for(i=1; i<=l; i++)
    {
        printf("\n %d",i*i);
    }
       printf("\n=============================");

}
main()
{

    add();
    oddeven();
    table();
    max2();
    max3();
    pn();
    aot();
    aoc();
    fac();
    cube();

}
