#include<stdio.h>
int main (){
    char day;
    printf("enter day :");
    scanf("%c", &day);
    switch (day){
        case 's' : printf("Satur-day\n");
        break;
        case 'u' : printf("Sun-day\n");
        break;
        case 'm' : printf("mon-day\n");
        break;
        case 't' : printf("Tues-day\n");
        break;
        case 'w' : printf("Wednes-day\n");
        break;
        case 'h' : printf("thus-day\n");
        break;
        case 'f' : printf("friday-day\nHoli-day\n");
        break;
    }
    return 0;
}