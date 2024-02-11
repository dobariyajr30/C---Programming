#include<stdio.h>

struct employ
{
    int id;
    char n[50];
    int s;
};

main()
{
    struct employ e1,e2,e3,e4;

    printf("\n Enter Employ Number=>");
    scanf("%d",&e1.id);

    fflush(stdin);
    printf("\n Enter Employ Name=>");
    gets(e1.n);

    printf("\n Enter Employ Salary=>");
    scanf("%d",&e1.s);

    printf("\n Enter Employ Number=>");
    scanf("%d",&e2.id);

    fflush(stdin);
    printf("\n Enter Employ Name=>");
    gets(e2.n);

    printf("\n Enter Employ Salary=>");
    scanf("%d",&e2.s);

    printf("\n Enter Employ Number=>");
    scanf("%d",&e3.id);

    fflush(stdin);
    printf("\n Enter Employ Name=>");
    gets(e3.n);

    printf("\n Enter Employ Salary=>");
    scanf("%d",&e3.s);

    printf("\n Enter Employ Number=>");
    scanf("%d",&e4.id);

    fflush(stdin);
    printf("\n Enter Employ Name=>");
    gets(e4.n);

    printf("\n Enter Employ Salary=>");
    scanf("%d",&e4.s);

    printf("\n %d \t %s \t %d \t",e1.id,e1.n,e1.s);
    printf("\n %d \t %s \t %d \t",e2.id,e2.n,e2.s);
    printf("\n %d \t %s \t %d \t",e3.id,e3.n,e3.s);
    printf("\n %d \t %s \t %d \t",e4.id,e4.n,e4.s);

}


