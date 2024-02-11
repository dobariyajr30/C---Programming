
#include<stdio.h>
struct movie
{
 int mid;
 char mname[50];
 int year;
};

main()
{
    struct movie m[100];
    int i,n;

    printf("\n Enter how many Movie are there =>");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
    printf("\n Enter MID=>");
    scanf("%d",&m[i].mid);

    fflush(stdin);
    printf("\n Enter Name=>");
    gets(m[i].mname);

    printf("\n Enter relase Year=>");
    scanf("%d",&m[i].year);

    }

    printf("\n ==================================");
    printf("\nMovie Id\tMovie Name\tRelase year");
    printf("\n ==================================");

    for(i=0; i<n; i++)
    {
      printf("\n %d \t %s \t %d",m[i].mid,m[i].mname,m[i].year);
    }


}
