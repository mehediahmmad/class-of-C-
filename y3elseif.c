#include<stdio.h>
int main() {
    int age;
    printf("Enter age : ");
    scanf("%d", &age);
    if(age < 8) {
        printf("child");
    }
    else if(age < 12) {
        printf("School going boy");
    }
    else if(age < 18) {
        printf("teenager");
    }
    else {
        printf("adult");
    }
    return 0;
}