#include<stdio.h>

int main() {
    int i,j,l,t;

    printf("\n Enter Limit=>");
    scanf("%d",&l);

    for(i=1; i<=l; i++)
     {
        for(j=1; j<i; j++)
           {
            printf(" ");
           }
        for(j=i; j<=l; j++)
           {
            printf("* ");
           }
        for(j=1; j<i; j++)
        {
            printf("  ");
        }

        for(j=i; j<=l; j++)
           {
            printf("* ");
           }

        printf("\n");
    }
}
