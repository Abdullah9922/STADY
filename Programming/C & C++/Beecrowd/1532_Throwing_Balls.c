//https://judge.beecrowd.com/en/problems/view/1532

#include<stdio.h>

int main()
{
    int v,n;

    while(1){
        scanf("%d %d",&n,&v);

        if(n==0 && v==0) return 0;

        int sum = 0, flag = 1, v2;

        while(v>0){
            v2 = v;
            while(v2>0){

                for(int i=1; i<=v2; i++)
                    sum += v2;
                v2--;
            }

            if(sum == n){
                printf("possivel\n");
                flag = 0;
                break;
            }
            v--;
            if(flag == 0) break;
        }
        if(flag == 1) printf("impossivel\n");
    }
}
