//https://judge.beecrowd.com/en/problems/view/1165

#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        int flag = 0;
        for(int i=2; i<=((n-1)/2)+1 ; i++){
            if(n%i==0){
                printf("%d nao eh primo\n",n);
                flag++;
                break;
            }
        }
        if(flag == 0)
            printf("%d eh primo\n",n);
    }
}
