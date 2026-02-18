#include<stdio.h>

int sum(int n)
{
    static int s;
    if(n==0)
        return s;

    else{
        s+=n%10;
        n=n/10;
        sum(n);
    }                  // while(n!=0)
                            // sum+=n%10;
                            // n=n/10;
}


int main()
{
    int n;
    scanf("%d",&n);
    int ahhhh=sum(n);
    printf("%d\n",ahhhh);
}





