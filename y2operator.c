#include<stdio.h>
int main(){
    int a=0;
    a ++;
    printf("a ++ = %d \n", a);
    ++a;
    printf("++ a = %d \n", a);
    a--;
    printf("a -- = %d \n", a);
    --a;
    printf("-- a = %d \n", a);
    return 0;
}
#include <stdio.h>
// Logical Operator
int main() {
    printf("%d \n", 3<4 && 3<5);       // The else if Statement
    printf("%d \n", 3<4 && 5<4);       // true && false → 0
    printf("%d \n", 3<4 && 5<4);       // repeated → 0
    printf("%d \n", 3>4 && 5>4);       // false && true → 0
    printf("%d \n", 3<4 && 3<5);       // repeated → 1

    printf("%d \n", 3<4 || 3<5);       // true || true → 1
    printf("%d \n", 3<4 || 5<4);       // true || false → 1
    
    printf("%d \n", !(3<4 && 3<5));    // !true → 0
    printf("%d \n", !(4<3 || 5<3));    // !false → 1
    return 0;
}
