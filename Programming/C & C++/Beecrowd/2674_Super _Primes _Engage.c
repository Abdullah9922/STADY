//https://judge.beecrowd.com/en/problems/view/2674
#include<stdio.h>
int main()
{
    int n;
    while((scanf("%d",&n))!=EOF){

        if(n==0){
            printf("Nada\n");
            continue;
        }


        int f=0,d=0,a,cnt=0;
        for(int i=2; i<n; ++i){
            if(n%i==0){
                printf("Nada\n");
                cnt++;
                break;
            }
        }

        if(cnt==0){
            while(n!=0){  //43
                a = n%10; // 3
                n = n/10;  // 4


                if(a==1){
                        printf("Primo\n");
                        d=1;
                        break;
                    }

                for(int j=2; j<a; ++j){3
                    if(a%j==0){
                        printf("Primo\n");
                        f=1;
                        break;
                    }
                }
                if(f==1){
                    d=1;
                    break;
                }
                //printf("kola\n");
            }
            if(d==0)
                printf("Super\n");
        }
    }
}
