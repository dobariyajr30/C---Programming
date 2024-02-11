#include<stdio.h>
main()
{
    char name1[100]={""};
    char name2[100]={""};

    printf("\n Enter the 1st Sentence=>");
    gets(name1);

    printf("\n Enter the 2nd Sentence=>");
    gets(name2);

    strcpy(name2,name1);


    printf("\n 2nd Array is=> %s",name2);

}
