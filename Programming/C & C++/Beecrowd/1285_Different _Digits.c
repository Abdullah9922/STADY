//https://judge.beecrowd.com/en/problems/view/1285
#include <stdio.h>

int main()
{
    int a,b;
    int cont=0;

    while(scanf("%d %d",&a,&b)!=EOF){
        for(int i=a;i<=b;i++){
            int arr[10]={0};
            int rep=0;
            int num=i;
            while(num>0){
                int digit=num%10;
                if(arr[digit]>0){
                    rep=1;
                    break;
                }
                arr[digit]++;
                num/=10;
            }
            if(rep==0) cont++;
        }

        printf("%d\n",cont);
        cont=0;
    }
}
