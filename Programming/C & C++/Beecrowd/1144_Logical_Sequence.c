//https://judge.beecrowd.com/en/problems/view/1144

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("%d %d %d\n",i ,i*i ,i*i*i );
        printf("%d %d %d\n",i ,(i*i)+1 ,(i*i*i)+1 );
    }
}
