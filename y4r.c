#include<stdio.h>
int main (){
    int i;
    for( i = 1 ; i < 11; i++){
        if(i == 5)
        break;
        
        printf("%d\n",i);
    }
    return 0;
}