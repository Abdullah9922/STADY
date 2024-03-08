//https://judge.beecrowd.com/en/problems/view/1075
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=100;i++){
        if(i%n==2)
            printf("%d\n",i);
    }

}
