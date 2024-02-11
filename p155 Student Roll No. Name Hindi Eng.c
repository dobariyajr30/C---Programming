#include<stdio.h>

struct stu
{
    int no;
    char n[100];
    int h,e;
};

main()
{
   struct stu s1,s2,s3,s4;

   printf("\n Enter Roll Number=>");
   scanf("%d",&s1.no);

   fflush(stdin);
   printf("\n Enter Student Name=>");
   gets(s1.n);

   printf("\n Enter Hindi Marks=>");
   scanf("%d",&s1.h);
   printf("\n Enter English Marks=>");
   scanf("%d",&s1.e);

   printf("\n Enter Roll Number=>");
   scanf("%d",&s2.no);

   fflush(stdin);
   printf("\n Enter Stdent Name=>");
   gets(s2.n);

   printf("\n Enter Hindi Makrs=>");
   scanf("%d",&s2.h);
   printf("\n Enter English Marks=>");
   scanf("%d",&s2.e);

   printf("\n Enter Roll Number=>");
   scanf("%d",&s3.no);

   fflush(stdin);
   printf("\n Enter Stdent Name=>");
   gets(s3.n);

   printf("\n Enter Hindi Makrs=>");
   scanf("%d",&s3.h);
   printf("\n Enter English Marks=>");
   scanf("%d",&s3.e);

   printf("\n Enter Roll Number=>");
   scanf("%d",&s4.no);

   fflush(stdin);
   printf("\n Enter Student Name=>");
   gets(s4.n);

   printf("\n Enter Hindi Marks=>");
   scanf("%d",&s4.h);
   printf("\n Enter English Marks=>");
   scanf("%d",&s4.e);

   printf("\n %d \t %s \t %d \t %d ",s1.no,s1.n,s1.h,s1.e);
   printf("\n %d \t %s \t %d \t %d ",s2.no,s2.n,s2.h,s2.e);
   printf("\n %d \t %s \t %d \t %d ",s3.no,s3.n,s3.h,s3.e);
   printf("\n %d \t %s \t %d \t %d ",s4.no,s4.n,s4.h,s4.e);
}
