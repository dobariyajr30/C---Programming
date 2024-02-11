#include<stdio.h>
main()
{
    FILE *f1,*f2;
    char ch;
    int c=0;

    f1=fopen("c:\\intel\\abc.txt","r");
    f2=fopen("c:\\intel\\capital 1st word.txt","w");

    while(ch!=EOF)
    {
        ch=getc(f1);

        if(ch==' ')
        {
            c++;
            printf("%c",ch);
        }
        else
        {
            if(c==0)
            {
                printf("%c",ch);
            }
            else
            {
                printf("%c",toupper(ch));
            }
            c=0;
        }

    }
    fclose(f1);
    fclose(f2);

    printf("\n Converted Successfully");
}
