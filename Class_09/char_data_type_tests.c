#include<stdio.h>

int main()
 {
 //printf("a mainīgā vērtība pirms deklarēšanas: %c\n",a);
// nedrīkst izmantot pirms deklarēšanas
 char a; // mainīgā ar identifikatoru vai vārdu "a" deklarēšana
	// ar identifikatoru a viennozīmīgi tiek sasaistīts kāds atmiņas apgabals
	// atmiņas apgabals - kur (vai vieta)? un cik (vai izmērs)?
	// uz jautājumu detalizēti kur? (adrese) atbildēsim citā nodaļā
	// cik? - 1 byte, jo ... char
	// komentārs par vārdu (vai identifikators0 - drīkst saturēt
	// burtus (ir starpība starp lieliemun maziem burtiem -a nav A - casesensitive
	// ciparus var, bet nedrīkst sākties ar ciparu
	// var būt mnemonisks, piemēram - cilindra_tilpums
 printf ("a mainīgā vērtība (kā simbols) uzreiz pēc deklarēšanas: %c\n",a);
 printf ("a mainīgā vērtība (kā dec skaitlis) uzreiz pēc deklarēšanas: %d\n",a,10);
 printf ("a mainīgā vērtība (kā hex skaitlis) uzreiz pēc deklarēšanas: %x\n",a);
 printf ("a mainīgā vērtība (kā oct skaitlis) uzreiz pēc deklarēšanas: %o\n",a);
//;;;;;;;;;;// daudz tukšie operatori

// int a
// šādi nedrīkst pārdeklarēt mainīgo

// NB! mainīgā būtība - mainīties
 a=89; // "=" - piešķiršanas operācija
	// pa kreisi ir - 89 -  atbilstoši noformējumam (pierkastam) tā ir
	// int tipa (4bytes) konstante pierakstīta, izmantojot dec skaitīšanu
	// => 89 = 64(2^6) + 16(2^4) + 8(2^3) + 1(2^0)
	// 0000 0000  0000 0000  0000 0000  0101 1001
	// a = 89
 printf ("a mainīgā vērtība (kā simbols) uzreiz pēc piešķiršanas: %c\n",a);
 printf ("a mainīgā vērtība (kā dec skaitlis) uzreiz pēc piešķiršanas: %d\n",a);
 printf ("a mainīgā vērtība (kā hex skaitlis) uzreiz pēc piešķiršanas: %x\n",a);
 printf ("a mainīgā vērtība (kā oct skaitlis) uzreiz pēc piešķiršanas: %o\n",a);

 a = 0x4c;
 printf ("\na mainīgā vērtība (kā simbols) uzreiz pēc piešķiršanas: %c\n",a);
 printf ("a mainīgā vērtība (kā dec skaitlis) uzreiz pēc piešķiršanas: %d\n",a);
 printf ("a mainīgā vērtība (kā hex skaitlis) uzreiz pēc piešķiršanas: %x\n",a);
 printf ("a mainīgā vērtība (kā oct skaitlis) uzreiz pēc piešķiršanas: %o\n",a);

 a = 160;
 // char -> signed char +> -128 ... 0 ... 127
 // 160(dec) -> 128(2^7) + 32(2^5) -> 0000 0000  0000 0000  0000 0000  1010 0000
 // mūsu (iekš a) rīcība ir (1)010 0000 +> ir "-" zīme => nākamie biti pa tiešo
 // uzreiz netiek pārveidoti par dec
 // (1)010 0000
 // 101 1111 - zīmes gadījumā atlikušos bitus invertē un
 //   + 	1 - pieskaita bināro 1
 // 110 0000 - un tikai tagad ŗēķina dec skaitli - 1*2^6 + 1*2^5 = 96
 // tieši tāpēc gala rezultāts ir -96
 printf ("\na mainīgā vērtība (kā simbols) uzreiz pēc piešķiršanas: %c\n",a);
 printf ("a mainīgā vērtība (kā dec skaitlis) uzreiz pēc piešķiršanas: %d\n",a);
 printf ("a mainīgā vērtība (kā hex skaitlis) uzreiz pēc piešķiršanas: %x\n",a);
 printf ("a mainīgā vērtība (kā oct skaitlis) uzreiz pēc piešķiršanas: %o\n",a);

 a = 320;

 printf ("a mainīgā vērtība (kā simbols) uzreiz pēc piešķiršanas: %c\n",a);
 printf ("a mainīgā vērtība (kā dec skaitlis) uzreiz pēc piešķiršanas: %d\n",a);
 printf ("a mainīgā vērtība (kā hex skaitlis) uzreiz pēc piešķiršanas: %x\n",a);
 printf ("a mainīgā vērtība (kā oct skaitlis) uzreiz pēc piešķiršanas: %o\n",a);

 char b = 93; // definēšana - deklarēšana ar piešķiršanu
              // prioritārā (tiks izpildīta pirmā) darbība šeit ir deklarēšana
              //

 return 0;
 }
