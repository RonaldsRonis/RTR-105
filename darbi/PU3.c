 #include <stdio.h>

 int main() {
    int n1, n2, n3;
    char seciba;

    printf("Ievadi 3 decimālus skaitļus: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Ievadi a augošai secībai vai d dilstošai: ");
    scanf(" %c", &seciba); 

    if (seciba == 'a')
 {
        // augošs
        if (n1 > n2) 
 {
            int temp = n1;
            n1 = n2;
            n2 = temp;
        }
        if (n2 > n3)
 {
            int temp = n2;
            n2 = n3;
            n3 = temp;
        }
        if (n1 > n2)
 {
            int temp = n1;
            n1 = n2;
            n2 = temp;
        }
    } else if (seciba == 'd')
 {
        // dilstošs
        if (n1 < n2)
 {
            int temp = n1;
            n1 = n2;
            n2 = temp;
        }
        if (n2 < n3)
 {
            int temp = n2;
            n2 = n3;
            n3 = temp;
        }
        if (n1 < n2)
 {
            int temp = n1;
            n1 = n2;
            n2 = temp;
        }
    } else {
        printf("Nederīgs\n");
        return 0;
    }

    printf("Kārtotie nr.: %d %d %d\n", n1, n2, n3);

    return 0;
}
