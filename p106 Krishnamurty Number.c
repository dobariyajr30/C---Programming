    #include<stdio.h>
    main()
    {

        int rev,y,no,f,i,z;

        printf("\n Enter Number=>");
        scanf("%d",&no);
        rev=0;
        z=no;

         // 145 is krishnamurty(a number whose sum of the factorial of digits is equal to the number itself.)
        while(no>0){
            y=no%10;
            f=1;
            for(i=1; i<=y; i++)
            {
                f=f*i;
            }

            rev=rev+f;
            no=no/10;
            }

            if(rev==z){
                printf("\n Krishnamurty Number");
            }
            else{
                printf("\n Not Krishnamurty Number");
            }


    }
