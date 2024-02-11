#include<stdio.h>
main()
{
    char name[100];
    int i,x,c=0;
    char ch;

    printf("\n Enter The Sentence=> ");
    gets(name);

    x  =strlen(name);


    for(i=0; i<x; i++)
    {
        ch=name[i];
        if(ch=='a' ||ch== 'A' ||ch== 'e' ||ch== 'E' ||ch== 'I' ||ch== 'i' ||ch== 'o' ||ch== 'O' ||ch== 'u' ||ch== 'U')
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("\n No vowels in the sentence");
    }

    printf("\n Total Vowels In the Sentence is=> %d",c);

}
