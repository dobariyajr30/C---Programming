#include <stdio.h>

main()
{
    FILE *f1;
    int totalMarks=0,fc=0,pc=0,roll,gujarati,eng, hindi, maths, sci;
    char name[100];

    f1=fopen("c:\\intel\\Student_Data1.txt", "r");

    while (fscanf(f1, "%d%s%d%d%d%d%d", &roll, name, &gujarati, &eng, &hindi, &maths, &sci ) != EOF)
    {

        totalMarks = gujarati + eng + hindi + maths + sci ;
        if (totalMarks >= 300)
        {
            pc++;
        }
        else
        {
            printf("roll no : %d , name : %s , guj : %d, eng : %d , hindi : %d , math : %d , sci : %d , total : %d.",roll,name,gujarati,eng,hindi,maths,sci,totalMarks);
            fc++;
        }

       printf("\n");
    }

    printf("\n");
    printf("Pass Count: %d\n", pc);
    printf("Fail Count: %d\n",fc);

    fclose(f1);


}
