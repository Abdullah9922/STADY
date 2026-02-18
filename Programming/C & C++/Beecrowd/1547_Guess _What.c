//https://judge.beecrowd.com/en/problems/view/1547

#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,s;
    while(tc--){
        scanf("%d %d",&n,&s);

        int arr[n];
        for(int i=1;i<=n;i++)
            scanf("%d",&arr[i]);

        int temp=0;
        int t1,t2, t=9999999;
        int flag = 0;
        for(int i=1;i<=n;i++){
            if(arr[i] == s){
                printf("%d\n",i);
                flag++;
                break;
            }

            else{
                if(arr[i] > s){
                    t1 = arr[i] - s;
                    if(t1 < t){
                        t= t1;
                        temp = i;
                    }
                }

                else{
                   t2 = s - arr[i];
                   if(t2 < t){
                        t= t2;
                        temp = i;
                    }
                }
            }
        }

        if(flag ==0 ) printf("%d\n",temp);
    }
}
