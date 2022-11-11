#include<stdio.h>

int main()
 {
 int i_value = 8563;
 printf("i_value (variable nameused) = %d\n",i_value);
 printf("size of i_value = %ld (byte)\n",sizeof(i_value));

 int *i_pointer = &i_value;

 printf("address of i_value (value of i_pointer) = %p\n",i_pointer);
 printf("size of i_pointer = %ld (byte)\n",sizeof(i_pointer));

 printf("i_value (address used) = %d\n",*i_pointer);


 *i_pointer = (*i_pointer) + 10;
 printf("i_value (variable nameused; after change) = %d\n\n",i_value);



double d_value = 1.25e-2;
printf("d_value (variable name used = %f\n",d_value);
printf("size of d_value = %ld (byte)\n",sizeof(d_value));

double *d_pointer = &d_value;
printf("address of d_value (value of d_pointer) = %p\n",d_pointer);
printf("size of d_pointer = %ld (byte)\n",sizeof(d_pointer));
printf("d_value (address used) = %f\n",*d_pointer);

 return 0;
 }

