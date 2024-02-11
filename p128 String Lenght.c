#include<stdio.h>
main()
{
    char name[100];
    int x;

    printf("\n Enter Name=>");
    gets(name);

        x=strlen(name);
        printf("\n Name=> %s",&name);
        printf("\n Lenght=> %d",x);
}
