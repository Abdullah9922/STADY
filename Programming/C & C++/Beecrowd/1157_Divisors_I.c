//https://judge.beecrowd.com/en/problems/view/1157
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    printf("1\n");
    for(int i=2 ; i<=((n-1)/2)+1 ; i++){
        if(n%i==0)
            printf("%d\n",i);
    }
    printf("%d\n",n);
}
