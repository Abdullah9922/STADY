#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n<12 && n!=12) printf("0\n");
    else{
       printf("%d\n",n/12);
    }
}
