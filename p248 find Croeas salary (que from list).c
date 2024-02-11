#include<stdio.h>
main()
{
 float gross_salary,basic,da,hra,ma,ltc,va,net_salary,pf;

 printf("\n Enter Basic Value=>");
 scanf("%f",&basic);

 basic=basic*0.52;
 da=basic*51/100;
 hra=basic*10/100;
 ma=basic*10/100;
 ltc=basic*5/100;
 va=basic*10/100;
 pf=1000;

 gross_salary=basic+da+hra+ma+ltc+va;
 net_salary=gross_salary-pf;

 printf("\n Gross salary=> %.2f",gross_salary);
 printf("\n Net salary=> %.2f",net_salary);
}
