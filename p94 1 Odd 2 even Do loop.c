#include<stdio.h>
main()
{
    int no1,i;

    printf("\n Enter limit=> ");
    scanf("%d",&no1);

    i=1;

    do{
        if(i%2==0){
            printf("\n%d Eve ",i);
            i++;
        }
        else{
            printf("\n%d Odd ",i);
            i++;
        }
      }
      while(i<=no1);
}
