//https://judge.beecrowd.com/en/problems/view/1164

#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        if(n == 1){
            printf("%d nao eh perfeito\n",n);
            continue;
        }

        else if(n == 24){
            printf("%d nao eh perfeito\n",n);
            continue;
        }

        int arr[10000];
        int index = 1;
        for(int i=2;i<=n-1;i++){
            if(n%i==0)
                arr[index++] = i;
        }

        arr[0] = 1;
        int sum = 0,flag = 1;

        for(int i=0; i<index; i++){
            sum += arr[i];
            if(sum == n){
                printf("%d eh perfeito\n",n);
                flag = 0;
                break;
            }
        }

        if(flag) printf("%d nao eh perfeito\n",n);

    }
}
