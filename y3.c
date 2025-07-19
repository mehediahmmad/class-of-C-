#include<stdio.h>
// even or odd
int main (){
    int number;
    printf("Enter number ");
    scanf("%d",&number);
    if (number % 2 == 0){
        printf("even number\n");
    }
    else {
        printf("odd number\n");
    }
    return 0;
}