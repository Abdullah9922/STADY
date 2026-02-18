#include<stdio.h>
int main()
{
    int sum=0,n,j=0;
    int a[10];
    for(int i=1;i<=7;i++){
        scanf("%d",&n);
        sum+=n;
        if(n>30){
            a[j]=n;
            j++;
        }
    }

    printf("%.2lf\n",(sum/7.0));
    for(int i=0;i<j;i++)
        printf("%d ",a[i]);

}
