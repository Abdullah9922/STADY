#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n <= 60){
        printf("gold\n");
    }
    else if(n <= 120){
        printf("silver\n");
    }
    else{
        printf("bronze\n");
    }
}