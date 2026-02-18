//https://judge.beecrowd.com/en/problems/view/1113
#include<stdio.h>
int main()
{
    int a,b;

    while(1){
        scanf("%d %d",&a,&b);
        if(a!=b){
            if(a<b){
                printf("Crescente\n");
                continue;
            }
            else{
                printf("Decrescente\n");
                continue;
            }

        }
        else
            break;
    }

}
