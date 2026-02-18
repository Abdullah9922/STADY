//https://judge.beecrowd.com/en/problems/view/1521

#include<stdio.h>

int main()
{
    int n;

    while(1){
        scanf("%d",&n);

        if(!n) return 0;

        int arr[n];
        for(int i=1;i<=n;i++)
            scanf("%d",&arr[i]);

        int k;
        scanf("%d",&k);

        int i=0;
        while(arr[i] != i)
            i = arr[i];

        printf("%d\n",i);
    }
}
