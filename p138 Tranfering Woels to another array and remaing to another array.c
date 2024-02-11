    #include<stdio.h>
    main()
    {
        char name1[100];
        char name2[100]={""};
        char name3[100]={""};
        int x,i,k=0,m=0;
        char ch;

        printf("\n Enter the Sentence=> ");
        gets(name1);


        x=strlen(name1);

        for (i=0; i<x; i++)
          {
           ch = name1[i];
           if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U' || ch == ' ')
            {
            name2[k]=ch;
            k++;
            }
            else
        {
           name3[m]=ch;
            m++;
        }
         }
        printf("\n Print vowels from the Sentence=> %s", name2);
        printf("\n Print concoles from the Sentence=> %s", name3);
    }

