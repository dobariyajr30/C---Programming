#include<stdio.h>

struct stu
{
    int no;
    char name[100];
    int hindi,eng;
};

main()
{
   struct stu s[100];
   int i,n;

   printf("\n Enter how many Student given Test=> ");
   scanf("%d",&n);

   for(i=0; i<n; i++)
   {
   printf("\n Enter Roll Number=>");
   scanf("%d",&s[i].no);

   fflush(stdin);
   printf("\n Enter Student Name=>");
   gets(s[i].name);

   printf("\n Enter Hindi Marks=>");
   scanf("%d",&s[i].hindi);
   printf("\n Enter English Marks=>");
   scanf("%d",&s[i].eng);
   }

   printf("\n====================================================================");
   printf("\nRoll No.\tStudent Name\tHindi Marks\tEnglish Marks");
   printf("\n====================================================================");

   for(i=0; i<n; i++)
   {
       printf("\n %d \t %s \t %d \t %d ",s[i].no,s[i].name,s[i].hindi,s[i].eng);
   }

}

