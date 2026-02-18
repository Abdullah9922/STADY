//https://judge.beecrowd.com/en/problems/view/2674
#include<stdio.h>
int main()
{
    int n;
    while((scanf("%d",&n))!=EOF){
        int n,f=0,d=0,a,cnt=0; scanf("%d",&n);

        for(int i=2; i<n; ++i){
            if(n%i==0){

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
                        f=1;
                        break;
                    }
                }
                if(f==1){
                    d=1;
                    break;
                }
            }
            if(d==0) printf("Super\n");
            else{
                printf("Primo\n");
            }

        }
        else{printf("Nada\n");}


    }



}
