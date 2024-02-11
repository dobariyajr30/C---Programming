#include<stdio.h>
struct book
{
    int id;
    char n[100];
    int pr,yr;
};
main()
{
    struct book b1,b2,b3,b4;

    printf("\n Enter Book ID=>");
    scanf("%d",&b1.id);

    fflush(stdin);
    printf("\n Enter Book Name=>");
    gets(b1.n);

    printf("\n Enter Release Year of Book=>");
    scanf("%d",&b1.yr);

    printf("\n Enter Price Of the Book=>");
    scanf("%d",&b1.pr);

    printf("\n Enter Book ID=>");
    scanf("%d",&b2.id);

    fflush(stdin);
    printf("\n Enter Book Name=>");
    gets(b2.n);

    printf("\n Enter Release Year of Book=>");
    scanf("%d",&b2.yr);

    printf("\n Enter Price Of the Book=>");
    scanf("%d",&b2.pr);

    printf("\n Enter Book ID=>");
    scanf("%d",&b3.id);

    fflush(stdin);
    printf("\n Enter Book Name=>");
    gets(b3.n);

    printf("\n Enter Release Year of Book=>");
    scanf("%d",&b3.yr);

    printf("\n Enter Price Of the Book=>");
    scanf("%d",&b3.pr);

    printf("\n Enter Book ID=>");
    scanf("%d",&b4.id);

    fflush(stdin);
    printf("\n Enter Book Name=>");
    gets(b4.n);

    printf("\n Enter Release Year of Book=>");
    scanf("%d",&b4.yr);

    printf("\n Enter Price Of the Book=>");
    scanf("%d",&b4.pr);

   printf("\n %d \t %s \t %d \t %d",b1.id,b1.n,b1.yr,b1.pr);
   printf("\n %d \t %s \t %d \t %d",b2.id,b2.n,b2.yr,b2.pr);
   printf("\n %d \t %s \t %d \t %d",b3.id,b3.n,b3.yr,b3.pr);
   printf("\n %d \t %s \t %d \t %d",b4.id,b4.n,b4.yr,b4.pr);


}
