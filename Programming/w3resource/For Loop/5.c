#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,a;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        {
            a=pow(i,3);
            printf("\nNumber is : %d and cube of the %d is : %d",i,i,a);

        }
}
