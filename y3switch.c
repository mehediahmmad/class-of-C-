#include<stdio.h>
int main (){
    int day;
    printf("enter day :");
    scanf("%d", &day);
    switch (day){
        case 1 : printf("Satur-day\n");
        break;
        case 2 : printf("Sun-day\n");
        break;
        case 3 : printf("mon-day\n");
        break;
        case 4 : printf("Tues-day\n");
        break;
        case 5 : printf("Wednes-day\n");
        break;
        case 6 : printf("thus-day\n");
        break;
        case 7 : printf("friday-day\nHoli-day\n");
        break;
    }
    return 0;
}