#include<stdio.h>
int main()
{
    int n,f=0,roll,sum=0;
    scanf("%d",&n);

    int arr[7];
    for(int x=1;x<=n;x++){

        for(int i=0;i<7;i++){
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }

        if(f<sum){
            f=sum;
            roll=x;
        }
    }

    printf("Roll - %d is performer of the week with Rahat's GF on the bed.\n",roll);
}
