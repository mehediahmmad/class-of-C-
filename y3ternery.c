#include<stdio.h>
int main() {
    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    age > 18 ? printf("adult \n") : printf("not adult \n");


    int number = 7, luckyNumber;

    printf("your luckey number :");
    scanf("%d", &luckyNumber);

    number == luckyNumber ? printf("you are lucky \n") : printf("you are not lucky \n");

    return 0;
}