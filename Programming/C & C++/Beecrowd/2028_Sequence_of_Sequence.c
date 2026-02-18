//https://judge.beecrowd.com/en/problems/view/2028

#include<stdio.h>

int main()
{
    int n,count=1;
    while(scanf("%d",&n) != EOF){



        if(n == 0){
            printf("Caso %d: 1 numero\n0\n\n",count++);
            continue;
        }


        long long int sum = 0;
        int n2 = n;
        while(n2 != 0){
            sum += n2;
            n2--;
        }

        printf("Caso %d: %lld numeros\n",count++,sum+1);

        int j;
        for(int i=0;i<=n;i++){ //2
            j = i;
            do{
                printf("%d ",i);
                if(i==n && j == 2){
                    printf("%d",i);
                    break;
                }

            }while(--j && j>0);
        }
        printf("\n\n");
    }
}
