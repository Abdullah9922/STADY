//https://judge.beecrowd.com/en/problems/view/1323
#include<stdio.h>
int main()
{
    int n;

    while (1){
        scanf("%d",&n);

        if(n==0) break;

        int squ=0;
        for(int i=0;i<=n;i++){
            squ+=i*i;
        }
        printf("%d\n",squ);
    }
}
