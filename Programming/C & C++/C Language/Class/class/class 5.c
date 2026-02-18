#include<stdio.h>
int main()
{
    int n1,n2;
    int i=1;
    scanf("%d%d",&n1,&n2);
    while(i<=n2)
    {
        printf("%d X %d = %d\n",n1,i,n1*i);
        i++;
    }
}
