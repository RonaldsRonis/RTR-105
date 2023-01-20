#include <stdio.h>
#include <stdlib.h>

 int main()
 {
  printf("ievadiet naturalu skaitli: ");
  char number;
  scanf("%c", &number);

  // binarais kods
  for (int i = 7; i >= 0; i--) {
    printf("%d", (number >> i) & 1);
  }
  printf("\n");

  return 0;
} 
//Binarais kods neatbilst ievaditajam  decimalajm skaitlim
//,jo ievaditais skaitlis tiek pienemts ASCII kodā, lai
//atbilstu vajadzetu char vieta lietot int un "%c"vieta "%d"
