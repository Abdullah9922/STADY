//https://judge.beecrowd.com/en/problems/view/1866

#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        if(n%2==0) printf("0\n");
        else printf("1\n");
    }
}
