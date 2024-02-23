#include<stdio.h>
int main()
{
    int n1,n2,a,i,lcm=1;
    scanf("%d %d",&n1,&n2);
    a=(n1<n2)?n2:n1;
    for(i=1;i<=a;i++){
        if (n1/i==0 && n2/i==0){
            lcm=lcm*i;
        }
    }
    printf("LCM = %d\n",lcm);
}
