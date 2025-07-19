#include<stdio.h>
int main(){
    int row,colum;
    for (row = 1; row <=5 ; row++)
    {
        int space=row-1,spacecount =0;
        for ( colum = 5; colum >= 1; colum--)
        {
            if (space>spacecount)
            {
                printf("   ");
                spacecount++;
            }else{
                printf(" * ");
            }
            
        }
        printf("\n");
        
    }
    return 0;
}
