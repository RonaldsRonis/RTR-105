#include <stdio.h>

void funkc1() {
    printf("Funkcija.\n");
}

void funkc2(int a, int b) {
    printf("Summa starp %d un %d ir %d\n", a, b, a + b);
}

int funkc3() {
    return 5;
}

int funkc4(int a, int b) {
    return a * b;
}

int main() {
    funkc1();
    funkc2(3, 4);
    printf("Return funkcijai 3: %d\n", funkc3());
    printf("Return funkcijai 4: %d\n", funkc4(5, 6));
    return 0;
}
// Nesapratu darba mērķi! Vai šiss bija viss, kas bija iecerēts???
