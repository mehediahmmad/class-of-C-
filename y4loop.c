# include <stdio.h>
int main () {

    //for loop
    for(int i=1; i<=10; i++) {
    printf("%d\n", i);
    }

    //while loop
    int i=1;
    while(i<=10) {
    printf("%d\n", i);
    i++;
    }

    //do while loop
    i = 1;
    do {
        printf("%d\n", i);
        i++;
    } 
        while(i<=10);

    return 0;
}
/*
# include <stdio.h>
int main () {

    //for loop
    for(int i=1; i<=10; i++) {
    printf("Hello World\n");
    }

    printf("finish for loop");

    //while loop
    int i=1;
    while(i<=10) {
    printf("%d\n", i);
    i+=1;
    }

    printf("fenish while loop ");

    //do while loop
    i = 1;
    do {
        printf("%d\n", i);
        i+=2;
    } 
        while(i<=10);

    return 0;
}
*/