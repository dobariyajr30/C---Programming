#include <stdio.h>

main()
{
    FILE *ptr;
    int totalMarks=0, roll, fc = 0, pc = 0, gujarati, eng, hindi, maths, sci, gk, comp;
    char name[100], result[10];

    ptr = fopen("c:\\intel\\Student_Data1.txt", "r");

    if (NULL == ptr)
    {
        printf("File can't be opened\n");
    }




    while (fscanf(ptr, "%d%s%d%d%d%d%d", &roll, name, &gujarati, &eng, &hindi, &maths, &sci ) != EOF)
    {

        totalMarks = gujarati + eng + hindi + maths + sci ;
        if (totalMarks >= 300)
        {
            pc++;
        }
        else
        {
            fc++;
        }

       printf("roll no : %d , name : %s , guj : %d, eng : %d , hindi : %d , math : %d , sci : %d , total : %d.",roll,name,gujarati,eng,hindi,maths,sci,totalMarks);
       printf("\n");
    }

    printf("Pass Count: %d\n", pc);
    printf("Fail Count: %d\n",fc);

    fclose(ptr);


}
