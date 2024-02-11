#include<stdio.h>
struct book
{
    int id;
    char name[100];
    int price,year;
};
main()
{
    struct book b[100];
    int i,n;

    printf("\n Enter limit =>");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
    printf("\n Enter Book ID=>");
    scanf("%d",&b[i].id);

    fflush(stdin);
    printf("\n Enter Book Name=>");
    gets(b[i].name);

    printf("\n Enter Release Year of Book=>");
    scanf("%d",&b[i].year);

    printf("\n Enter Price Of the Book=>");
    scanf("%d",&b[i].price);
    }

    printf("\nId\tName\tYear\tPrice");
    printf("\n================================");
    for(i=0;i<n;i++)
    {
    printf("\n %d \t %s \t %d \t %d",b[i].id,b[i].name,b[i].year,b[i].price);
    }

    printf("\n================================");
}
