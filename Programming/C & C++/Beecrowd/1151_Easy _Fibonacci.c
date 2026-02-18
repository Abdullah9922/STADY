//https://judge.beecrowd.com/en/problems/view/1151
#include<stdio.h>
int main()
{
    int n,num1=0,num2=1,num3;
    scanf("%d",&n);

    printf("%d %d ",num1,num2);

    for(int i=1;i<=n-2;i++){
        num3=num1+num2;
        printf("%d",num3); //
        if(i!=n-2)
            printf(" ");
        num1=num2;
        num2=num3; //

    }
    printf("\n");
}
