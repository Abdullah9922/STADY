//https://judge.beecrowd.com/en/problems/view/1961

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int j,n;
    scanf("%d %d",&j,&n);

    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int temp;
    for(int i=0;i<n-1;i++){
        temp = abs(arr[i]-arr[i+1]);
        if(temp <= j) continue;
        else{
            printf("GAME OVER\n");
            return 0;
        }
    }
    printf("YOU WIN\n");
    return 0;
}
