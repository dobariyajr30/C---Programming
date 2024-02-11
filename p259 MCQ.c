#include<stdio.h>
main()
{
    int c=0;
    char q1,q2,q3,q4;

    printf("\n ~~~MCQ~~~");

    printf("\n");

    printf("\n Q-1 ");
    printf("\n What is capital Gujarat");
    printf("\n A Ahmedabad");
    printf("\n B Ganadhinagar");
    printf("\n C Anand");
    printf("\n D Rajkot");
    printf("\n Enter You're Option=>");
    scanf("%c",&q1);

    if(q1=='b' || q1=='B')
    {
        printf("\n Right Ans");
        c++;
    }
    else
    {
        printf("\n Wrong Option");
        c--;
    }
    fflush(stdin);

    printf("\n Q-2 ");
    printf("\n How Many Shlokash are there in Bhagvat Geeta");
    printf("\n A 700");
    printf("\n B 800");
    printf("\n C 900");
    printf("\n D 1000");
    printf("\n Enter You're Option=>");
    scanf("%c",&q2);

    if(q2=='a' || q1=='A')
    {
        printf("\n Right Ans");
        c++;
    }
    else
    {
        printf("\n Wrong Option");
        c--;
    }
    fflush(stdin);

    printf("\n Q-3 ");
    printf("\n In Which year India got independet");
    printf("\n A 1944");
    printf("\n B 1945");
    printf("\n C 1946");
    printf("\n D 1947");
    printf("\n Enter You're Option=>");
    scanf("%c",&q3);

    if(q3=='D' || q1=='d')
    {
        printf("\n Right Ans");
        c++;
    }
    else
    {
        printf("\n Wrong Option");
        c--;
    }
    fflush(stdin);

    printf("\n Q-4 ");
    printf("\n Gandhijaynti is celebrated on");
    printf("\n A 3rd Oct");
    printf("\n B 15th Aug");
    printf("\n C 2nd Oct");
    printf("\n D 26th Jan");
    printf("\n Enter You're Option=>");
    scanf("%c",&q4);

    if(q4=='C' || q1=='c')
    {
        printf("\n Right Ans");
        c++;
    }
    else
    {
        printf("\n Wrong Option");
        c--;
    }
    fflush(stdin);

    printf("\n ~~~~~~~~Quiz End~~~~~~~~");

    printf("\n You're Score is =>%d",c);


}
