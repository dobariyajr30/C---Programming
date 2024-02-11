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
   int i,n,cf=0,cp=0,o;
   float per;

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

   printf("\n============================================================================================================================");
   printf("\nRoll No.\tStudent Name\tHindi Marks\tEnglish Marks\tGujarati Marks\tMaths Marks\tTotal Marks Obtain\tPercantage");
   printf("\n============================================================================================================================");

   for(i=0; i<n; i++)
   {
       per=((s[i].hindi+s[i].eng+s[i].gujarati+s[i].maths)*100)/400;
       if(per>35)
       {
         cp++;
         printf("\n %d \t %s \t %d \t %d \t%d \t%d \t%d \t %.2f %%  Pass",s[i].no,s[i].name,s[i].hindi,s[i].eng,s[i].gujarati,s[i].maths,s[i].hindi+s[i].eng+s[i].gujarati+s[i].maths,per);

       }
       else
       {
        cf++;
        printf("\n %d \t %s \t %d \t %d \t%d \t%d \t%d \t %.2f %% Fail",s[i].no,s[i].name,s[i].hindi,s[i].eng,s[i].gujarati,s[i].maths,s[i].hindi+s[i].eng+s[i].gujarati+s[i].maths,per);
       }

   }

   printf("\n Fail=> %d",cf);
   printf("\n Pass=> %d",cp);

   printf("\n 1 for Student who are pass in Exam");
   printf("\n 2 for Student who are fail in Exam");
   printf("\n 3 for All Student");

   printf("\n Select Option from Above=");
   scanf("%d",&o);

   for (i = 0; i < n; i++)
    {
    per = ((s[i].hindi + s[i].eng + s[i].gujarati + s[i].maths) * 100) / 400;

   if (o==1)
   {
       if(per>=34)
       {
       printf("\n %d \t %s \t %d \t %d \t%d \t%d \t%d \t %.2f %%  Pass",s[i].no,s[i].name,s[i].hindi,s[i].eng,s[i].gujarati,s[i].maths,s[i].hindi+s[i].eng+s[i].gujarati+s[i].maths,per);
       }
   }

   else if (o==2)
   {

       if(per<34)
       {
           printf("\n %d \t %s \t %d \t %d \t%d \t%d \t%d \t %.2f %% Fail",s[i].no,s[i].name,s[i].hindi,s[i].eng,s[i].gujarati,s[i].maths,s[i].hindi+s[i].eng+s[i].gujarati+s[i].maths,per);
       }
   }
   else if (o==3)
   {
       printf("\n %d \t %s \t %d \t %d \t%d \t%d \t%d \t %.2f %%",s[i].no,s[i].name,s[i].hindi,s[i].eng,s[i].gujarati,s[i].maths,s[i].hindi+s[i].eng+s[i].gujarati+s[i].maths,per);
   }

  }
}
