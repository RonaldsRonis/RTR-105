 #include<stdio.h>
 #include<math.h>
 double mans_cosinus ( double x ){
 double a , S ;
 int k=0;
 a = 1;
 S = a;
printf("k\tx\t\ta\tS\n");
 printf("%d\t%.2f\t%.2f\t%.2f\n", k, x , a , S) ;

 while (k<3){
 k++;
 a = a * (-1) *x*x / ((2*k) *(2*k-1)) ;
 S = S + a ;
 printf("%d\t%.2f\t%.2f\t%.2f\n", k, x , a , S) ;
 }
 return S ;
 }

 void main () {
	double x=0.765 ,y , yy ;
 y = cos(x);
 printf("standarta funkcija cos − y=cos(%.2f)=%.2f\n",x,y);
 yy = mans_cosinus(x);
 printf("lietotaaja  funkcija − y=mans_cosinus(%.2f)=%.2f\n",x,yy);
}
