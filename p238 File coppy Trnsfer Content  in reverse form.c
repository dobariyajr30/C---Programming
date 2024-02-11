#include<stdio.h>
#include<string.h>
main()
{
    FILE *f1,*f2;
    char ch,a[200];
    int i=0,j;
    f1=fopen("c:\\intel\\abc.txt","r");
    f2=fopen("c:\\intel\\rc.txt","w");

    while(ch!=EOF)
    {
        ch=getc(f1);
        a[i]=ch;
        i++;
    }


    for(j=i-1;j>=0;j--)
    {
        printf("%c",a[j]);
        putc(ch,f2);
    }
    fclose(f1);
    fclose(f2);

    printf("\n Reverse Successfully");
}
