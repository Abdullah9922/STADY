
#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=10;i++){
        printf("statment 0\n");
        if(i%2==0){
            printf("statment 1\n");
            continue;
        }
        printf("statment 2\n");
    }
    return 0;
}
