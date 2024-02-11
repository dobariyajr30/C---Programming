#include<stdio.h>
main()
{
    char op;

    printf("\n ~Using Symbol Food Prince Tag~");

     printf("\n");

    printf("\n P For Pizza");
    printf("\n I For Idli");
    printf("\n S For Sandwitch");
    printf("\n A For Apple Pie");

    printf("\n");

  printf("\n Select Number You wan't Know Price of=>");
    scanf("%c",&op);

    if(op=='p' || op=='P'){
        printf("\n It is Off 150/-");
    }
    else if(op=='i' || op=='I'){
        printf("\n It is Off 30/-");
    }
    else if(op=='s' || op=='S'){
        printf("\n It is Off 60/-");
    }
    else if(op=='a' || op=='A'){
        printf("\n It is Off 200/-");
    }
    else{
        printf("\n Sorry, there No item like this");
    }


}
