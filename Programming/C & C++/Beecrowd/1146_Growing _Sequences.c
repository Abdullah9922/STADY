//https://judge.beecrowd.com/en/problems/view/1146
#include<stdio.h>
int main()
{
    int n;
    while(1){
        scanf("%d",&n);
        if(n!=0){
           for(int i=1;i<=n;i++){
                printf("%d",i);
                if(i!=n)
                    printf(" ");
           }
            printf("\n");
            continue;
        }
        else
            break;
    }
}
