#include<stdio.h>
int main()
{
    int n1,n2,sum=0;
    scanf("%d %d",&n1 ,&n2);
    for(int i=n1;i<=n2;i++){
        if(i % 9 == 0){
            printf("%d  ",i);
            sum+=i;
        }
    }
    printf("\nSUM = %d",sum);
}
