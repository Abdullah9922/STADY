#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=10;i++){
        if(i%2==0){
            printf("Hi %d\n",i);
            continue;
        }
        printf("Hello %d\n",i);
    }
    return 0;
}
