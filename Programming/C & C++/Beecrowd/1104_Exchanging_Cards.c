//https://judge.beecrowd.com/en/problems/view/1104

#include<stdio.h>

int main()
{
    int a,b;

    while(1){
        scanf("%d %d",&a,&b);

        if(!a && !b) break;
        int x[a],y[b];

        for(int i=0;i<a;i++)
            scanf("%d",&x[i]);
        for(int i=0;i<b;i++)
            scanf("%d",&y[i]);

        int flag;
        for(int i=0;i<a;i++){
            flag = 0;
            for(int j=0;j<b;j++){
                if(x[i] == y[j]){
                    y[j] = -1;
                    flag=1;
                }
            }
            if(flag) x[i] = -1;
        }

        int n = a+b;
        int arr[n];
        for(int i=0;i<n;i++)
            arr[i] = -2;

        int index =0,flag2=1;
        int sml = a>b?b:a;

        for(int i=0;i<sml;i++){

            if(x[i] != -1 && y[i] != -1){
                flag2 = 1;

                for(int j=0;j<n;j++){
                    if(arr[j] == x[i] || arr[j] == y[i])
                        flag2 =0;
                }
            }

            else continue;

            if(flag2){
                arr[index++] = x[i];
                arr[index++] = y[i];
            }

        }

        printf("%d\n",index/2);

    }
}
