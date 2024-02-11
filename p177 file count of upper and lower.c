#include<stdio.h>
main()
{
    FILE *f1;
    char ch;
    int cl,cu;

    f1=fopen("c:\\intel\\abc.txt","r");

    while(ch!=EOF)
    {
        ch=getc(f1);

        if(isupper(ch))
        {
         cu++;
        }
        else
        {
            cl++;
        }
    }
    fclose(f1);
    printf("\n count of Upper=> %d",cu);
    printf("\n count of Lower=> %d",cl);
}
