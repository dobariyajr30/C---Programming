#include<stdio.h>

struct stu
{
    int no,hindi,eng,maths,gujarati,sci,gk,comp;
    char name[100];

};

main()
{
    struct stu s[100];
    int i,n;
    FILE *f1;

    f1=fopen("c:\\intel\\Student_Data1.txt", "w");

    printf("\n Enter How many Student Given exam=>");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        printf("\n Enter Student Roll No.=>");
        scanf("%d",&s[i].no);

        printf("\n Enter Student Name=>");
        scanf("%s",&s[i].name);
        fflush(stdin);

        printf("\n Enter Gujarati Marks=>");
        scanf("%d",&s[i].gujarati);

        printf("\n Enter English Marks=>");
        scanf("%d",&s[i].eng);

        printf("\n Enter Hindi Marks=>");
        scanf("%d",&s[i].hindi);

        printf("\n Enter Maths Marks=>");
        scanf("%d",&s[i].maths);

        printf("\n Enter Science  Marks=>");
        scanf("%d",&s[i].sci);

        printf("\n Enter G.K Marks=>");
        scanf("%d",&s[i].gk);

        printf("\n Enter Computer Marks=>");
        scanf("%d",&s[i].comp);

        fprintf(f1,"\n%d\t%s\t%d\t%d\t%d\t%d\t%d",s[i].no,s[i].name,s[i].gujarati,s[i].eng,s[i].hindi,s[i].maths,s[i].sci,s[i].gk,s[i].comp);
    }
     printf("\n====================================================================");
    printf("\nRoll No.\tStudent Name\tGujarati Marks\tEnglsih Marks\tHindi marks\tMaths Marks\Science Marks\tG.K marks\tComputer Marks");
    printf("\n====================================================================");

    for(i=0; i<=n; i++)
    {
        printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d",s[i].no,s[i].name,s[i].gujarati,s[i].eng,s[i].hindi,s[i].maths,s[i].sci,s[i].gk,s[i].comp);
    }

    fclose(f1);

}
