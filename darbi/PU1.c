
#include <stdio.h>
 int main(void) {

  long int a, b, res;

  printf("Ievadiet pirmo skaitli:\n");
  scanf("%ld", &a);
  printf("Ievadiet otro skaitli:\n");
  scanf("%ld", &b);

  //reizināšana
  res = a * b;

  //attēlošana
  printf("Reizināšanas rezultāts ir: %ld", res);

  return 0;
}
