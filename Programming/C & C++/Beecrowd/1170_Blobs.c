//https://judge.beecrowd.com/en/problems/view/1170
#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    double n;
    while(tc--){
        scanf("%lf",&n);

        int count=0;
        while(n>1){
            n=n/2;
            count++;
        }
        printf("%d dias\n",count);
    }
}
