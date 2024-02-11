#include<stdio.h>
main()
{
    FILE *f1,*f2;
    char ch;
    int c=0;

    f1=fopen("c:\\intel\\abc.txt","r");
    f2=fopen("c:\\intel\\space.txt","w");

    while(ch!=EOF)
    {
        ch=getc(f1);

        if(ch==' ')
        {
            c++;
            if(c==1)
            {
              putc(ch,f2);
            }
        }
           else
            {
              c=0;
              putc(ch,f2);
            }

    }
    fclose(f1);
    fclose(f2);

    printf("\n Transfer without many space");
}
