#include<stdio.h>
struct movie
{
 int mid;
 char mname[50];
 int year;
};

main()
{
    struct movie m1,m2,m3,m4;

    printf("\n Enter MID=>");
    scanf("%d",&m1.mid);

    fflush(stdin);
    printf("\n Enter Name=>");
    gets(m1.mname);

    printf("\n Enter release Year=>");
    scanf("%d",&m1.year);

    printf("\n Enter MID=>");
    scanf("%d",&m2.mid);

    fflush(stdin);
    printf("\n Enter Name=>");
    gets(m2.mname);

    printf("\n Enter release Year=>");
    scanf("%d",&m2.year);

    printf("\n Enter MID=>");
    scanf("%d",&m3.mid);

    fflush(stdin);
    printf("\n Enter Name=>");
    gets(m3.mname);

    printf("\n Enter release Year=>");
    scanf("%d",&m3.year);

    printf("\n Enter MID=>");
    scanf("%d",&m4.mid);

    fflush(stdin);
    printf("\n Enter Name=>");
    gets(m4.mname);

    printf("\n Enter release Year=>");
    scanf("%d",&m4.year);

   printf("\n %d \t %s \t %d",m1.mid,m1.mname,m1.year);
   printf("\n %d \t %s \t %d",m2.mid,m2.mname,m2.year);
   printf("\n %d \t %s \t %d",m3.mid,m3.mname,m3.year);
   printf("\n %d \t %s \t %d",m4.mid,m4.mname,m4.year);
}
