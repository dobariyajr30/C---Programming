#include<stdio.h>
main()
{
    int i,n;
    int t1=0,t2=1,nt;

    printf("\n Enter Limit=> ");
    scanf("%d",&n);

    printf("Fibonacci Series: %d %d",t1,t2);

    for (i=3; i<=n; i++)
    {
        nt=t1+t2;
        printf(" %d",nt);
        t1=t2;
        t2=nt;
    }
}
