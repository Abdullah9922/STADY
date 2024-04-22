//https://judge.beecrowd.com/en/problems/view/1858
#include<stdio.h>
int main()
{
    int n,temp,d=0,e=1;

    scanf("%d",&n);

        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);

        temp=a[d];
        for(d=0;d<n;d++){
            if(a[d]<temp){
                temp=a[d];
                e=d+1;
            }
        }

        printf("%d\n",e);

}
