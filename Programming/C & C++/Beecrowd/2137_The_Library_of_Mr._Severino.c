//https://judge.beecrowd.com/en/problems/view/2137

#include<stdio.h>

int main()
{
    int n;

    while(scanf("%d",&n) != EOF){

        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);

        int temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i]<a[j]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        for(int i=0;i<n;i++){
            if(a[i]<=999){

                if(a[i]<=9){
                    printf("000");
                    printf("%d\n",a[i]);
                }
                else if(a[i] <=99){
                    printf("00");
                    printf("%d\n",a[i]);
                }
                else if(a[i] <=999){
                    printf("0");
                    printf("%d\n",a[i]);
                }

            }

            else
                printf("%d\n",a[i]);
        }
    }
}
