#include<stdio.h>
int main (){
    int a,b;
    printf("Enter starting point : ");
    scanf("%d", &a);
    printf("Enter finishing point : ");
    scanf("%d", &b);
    for (int  i = a; i <= b; i++)
    {
        printf("%d\n",i);
    }
    

    return 0;
}