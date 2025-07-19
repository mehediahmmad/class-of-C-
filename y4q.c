#include<stdio.h>

int main () {
    int a, b;
    printf("Enter starting point : ");
    scanf("%d", &a);
    printf("Enter finishing point : ");
    scanf("%d", &b);

    do {
        printf("%d\n", a);
        a += 2;
    } while (a <= b);

    return 0;
}