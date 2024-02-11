#include<stdio.h>
main()
{
    FILE *f1;
    char ch,c;

    f1=fopen("c:\\intel\\abc.txt","r");

    while(ch!=EOF)
    {
      ch=getc(f1);

        if(ch=='\n')
        {
            c++;
        }
    }
    fclose(f1);
    printf("\n %d lines are there",c);

}
