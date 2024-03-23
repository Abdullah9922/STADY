//https://judge.beecrowd.com/en/problems/view/2674
#include<stdio.h>
int main()
{
    int n,f=0,d=0,a,cnt=0;
    while((scanf("%d",&n))!=EOF){

        for(int i=2; i<n; ++i){
            if(n%i==0){
                printf("Nada\n");
                cnt++;
                break;
            }
        }

        if(cnt==0){
            while(n!=0){  //43
                a = n%10;
                n = n/10;

                for(int j=2; j<a; ++j){
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
            }
            if(d==0)
                printf("Super\n");
        }
    }
}
