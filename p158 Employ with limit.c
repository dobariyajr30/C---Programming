#include<stdio.h>

struct employ
{
    int id;
    char name[50];
    int salery;
};

main()
{
    struct employ e[100];
    int n,i;

    printf("\n How many Employes are add=> ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
    printf("\n Enter Employ Number=>");
    scanf("%d",&e[i].id);

    fflush(stdin);
    printf("\n Enter Employ Name=>");
    gets(e[i].name);

    printf("\n Enter Employ Salary=>");
    scanf("%d",&e[i].salery);

    }
    printf("\n==================================");
    printf("\nid\tEmp Name\tSalery");
    printf("\n==================================");
    for(i=0; i<n; i++)
    {
      printf("\n %d \t %s \t %d \t",e[i].id,e[i].name,e[i].salery);
    }

}


