#include<stdio.h>
main()
{
    char name[100]={""};
    char s_name[100]={""};

    printf("\n Enter First Name=>");
    gets(name);

    printf("\n Enter Last Name=>");
    gets(s_name);

    strcat(name," ");
    strcat(name,s_name);

    printf("\n Full Name=> %s",name);
}
