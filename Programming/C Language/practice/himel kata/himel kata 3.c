#include<stdio.h>
int main()
{
    int i=0,n;
    printf("Enter N\n");
    scanf("%d",&n);
    do
    {
      printf("%d\n", i);
      i=i+5;
    }
    while(i<=n);

}

