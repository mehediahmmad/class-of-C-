#include<stdio.h>
// numta
int main (){
    int a ,b=0;

    printf("which room will need namta of? : ");
    scanf("%d", &a);

    while (b<11)
    {
        printf("%d * %d = %d\n",a,b,a*b);
        b++;
    }
    return 0;
}
