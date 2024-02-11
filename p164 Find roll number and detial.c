#include<stdio.h>

struct stu
{
    int no;
    char name[100];
    int hindi,eng,gujarati,maths;
};

main()
{
   struct stu s[100];
   int i,n,f,c=0;

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
   printf("\n Enter Gujarati Marks=>");
   scanf("%d",&s[i].gujarati);
   printf("\n Enter Maths Marks=>");
   scanf("%d",&s[i].maths);
   }

   printf("\n====================================================================");
   printf("\nRoll No.\tStudent Name\tHindi Marks\tEnglish Marks\tGujarati Marks\tMaths Marks\tTotal Marks Obtain \tPercantage");
   printf("\n====================================================================");

   for(i=0; i<n; i++)
   {
       printf("\n %d \t %s \t %d \t %d \t%d \t%d \t%d \t%d ",s[i].no,s[i].name,s[i].hindi,s[i].eng,s[i].gujarati,s[i].maths,s[i].hindi+s[i].eng+s[i].gujarati+s[i].maths,((s[i].hindi+s[i].eng+s[i].gujarati+s[i].maths)*100)/400);
   }

   printf("\n=====================================================================");

   printf("\n Search Roll No.=>");
   scanf("%d",&f);

   for(i=0; i<n; i++)
    {
        if(f==s[i].no)
            {
                printf("\n %d \t %s \t %d \t %d \t%d \t%d \t%d \t%d ",s[i].no,s[i].name,s[i].hindi,s[i].eng,s[i].gujarati,s[i].maths,s[i].hindi+s[i].eng+s[i].gujarati+s[i].maths,((s[i].hindi+s[i].eng+s[i].gujarati+s[i].maths)*100)/400);
                c=1;
                break;
            }
    }

    if(c==0)
    {
        printf("\n No entry Like this");
    }

}

