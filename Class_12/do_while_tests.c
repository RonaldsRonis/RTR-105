/*Ciklu konstrukcija ļauj vairākas reizes pēc kārtas izpildīt 
vienas un tās pašas koda rindas (alternatīva - programmētājs manuāli 
atkārto rindu rakstiīšanu)*/

// while - kamēr
// do .. while - darīt kamēr
// for - darīt līdz

// kodēšanai - https://www.onlinegdb.com/
 //do un for| while vieta
 //         v
// while(izteiksme) viena _darbība;
// while(izteiksme)
// viena_darbība;
// while(izteiksme) {pirmā_darbība ; otrā darbība;}
// while(izteiksme)
// {
// pirmā_darbība;
// otrā_darbība;
// }

// tāpat kā iepriekš viena darbība vai pirmā darbība utt.
// tiks (regulāri) izpildītas ja izteiksmes rezultāts ir "true"
// "true" - 1 rezultātā kaut vienā bitā.
// "false" - 0 visos rezultāta bitos

#include<stdio.h>

int main()
 {
 unsigned char c = 10;
 
 do
 {
  printf("c = %d\n",c);
 c--;
 }
 printf("izdruka ar printf aiz cikla.\n");
 printf("c = %d\n",c);

 printf("\n");

return 0;
}
