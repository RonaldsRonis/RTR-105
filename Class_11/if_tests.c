// nosacījuma operatorsif tiekizmantots koda izpildessaražošanai
// if darbība_1_gab;
// if(izteiksme)
// darbiba_1_gab;
// nozīmē sekojošo  - darbība_1_gab tiks izpildīta tad,kad
// 

#include<stdio.h>

int main()
 {
 int a, b;
 printf("cienījamais lietotāj. Lūdzu,ievadi divus skaitļus ");
 scanf("%d",&a);
 scanf("%d",&b);

 if(a>b)
 {
 printf("Tavs ievadītais a(%d) ir lielāks par ievadīto b(%d)\n ",a,b);
 }
 else
 {
 printf("Tavs ievadītais a(%d) nav lielāks par ievadīto b(%d)\n ",a,b);
 if(a==b)
  printf("Vēl vairāk,a(%d) ir vienāds ar b(%d)\n ",a,b);
 else
 printf("Vēl vairāk,a(%d) ir mazāks par b(%d)\n ",a,b);
 }

 return 0;
 }
