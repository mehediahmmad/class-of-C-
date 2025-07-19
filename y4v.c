#include <stdio.h>

int main() {
    int row ,colum,n;
    scanf("%d",&n);

    for(row = 1;row <= n ;row++){
        for(colum = 1 ;colum <= row ;colum++){
            printf(" * ");
        }
        printf(" \n");
    }
    return 0;
}
