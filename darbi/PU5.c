
 #include <stdio.h>

 int main() {
    double n;
    char type;
    long long rez = 1;
    int i = 1;

    printf("Ievadiet decimālu sk.: ");
    scanf("%lf", &n);
    printf("Izvēlieties datu tipu (c-char, i-int, l-long long): ");
    scanf(" %c", &type);

    if (type == 'c')
 {
        char n_c = (char)n;
        if (n_c < 0)
 {
                printf("Faktoriāls negatīvam skaitlim nav aprēķināms.\n");
        return 0;
 }
        for(int i = 1; i <= n_c; i++)
 {
            rez *= i;
        }
        printf("Faktoriāls no %d ir %lld", n_c, rez);
    } else if (type == 'i')
 {
        int n_i = (int)n;
        if (n_i < 0)
 {
                printf("Faktoriāls negatīvam skaitlim nav aprēķināms.\n");
        return 0;
 }
        for(int i = 1; i <= n_i; i++)
 {
            rez *= i;
        }
        printf("Faktoriāls no %d ir %lld", n_i, rez);
    } else if (type == 'l')
 {
        long long n_l = (long long)n;
	if (n_l < 0)
 {
	printf("Faktoriāls negatīvam skaitlim nav aprēķināms.\n");
	return 0;
 }
        for(int i = 1; i <= n_l; i++)
 {
            rez *= i;
        }
        printf("Faktoriāls no %lld ir %lld", n_l, rez);
    } else
 {
        printf("Nederīgs datu tips");
    }

    return 0;
 }
