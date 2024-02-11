#include<stdio.h>
main()
{
    int op;

    printf("\n ~Food Prince Tag~");

     printf("\n");

    printf("\n Number 1 For Pizza");
    printf("\n Number 2 For idli");
    printf("\n Number 3 For Dhosa");
    printf("\n Number 4 For Vada");

    printf("\n");

  printf("\n Select Number You wan't Know Price of=>");
    scanf("%d",&op);

    if(op==1){
        printf("\n It is Off 150/-");
    }
    else if(op==2){
        printf("\n It is Off 30/-");
    }
    else if(op==3){
        printf("\n It is Off 60/-");
    }
    else if(op==4){
        printf("\n It is Off 200/-");
    }
    else{
        printf("\n Sorry, there No item like this");
    }


}
