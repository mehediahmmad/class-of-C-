#include<stdio.h>
int main (){
    int age;
    printf("Enter Age : ");
    scanf("%d",&age);
    if(age >= 18) {
        printf("you are an adult\n");
        printf("they can boed\n");

    }
    else {
        printf("you are not an adult\n");
    }
    return 0;
}