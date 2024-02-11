    #include<stdio.h>
main()
{
    int a[100];

    printf("\n Enter 1st Digit=> ");
    scanf("%d",&a[0]);
    printf("\n Enter 2nd Digit=> ");
    scanf("%d",&a[1]);
    printf("\n Enter 3rd Digit=> ");
    scanf("%d",&a[2]);
    printf("\n Enter 4th Digit=> ");
    scanf("%d",&a[3]);
    printf("\n Enter 5th Digit=> ");
    scanf("%d",&a[4]);

    printf("\n Addtion is=> %d",a[0]+a[1]+a[2]+a[3]+a[4]);

    if(a[0]%2==0)
    {
        printf("\n %d is Eve Number",a[0]);
    }
    else
    {
        printf("\n %d is Odd Number",a[0]);
    }
    if(a[1]%2==0)
    {
        printf("\n %d is Eve Number",a[1]);
    }
    else
    {
        printf("\n %d is  Odd Number",a[1]);
    }
    if(a[2]%2==0)
    {
        printf("\n %d is Eve Number",a[2]);
    }
    else
    {
        printf("\n %d is Odd Number",a[2]);
    }if(a[3]%2==0)
    {
        printf("\n %d is Eve Number",a[3]);
    }
    else
    {
        printf("\n %d is Odd Number",a[3]);
    }
    if(a[4]%2==0)
    {
        printf("\n %d is Eve Number",a[4]);
    }
    else
    {
        printf("\n %d is Odd Number",a[4]);


}
}
