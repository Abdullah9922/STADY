//https://judge.beecrowd.com/en/problems/view/3106
#include<stdio.h>
int main()
{
    int tc,a;
    scanf("%d",&tc);

    int arr[tc];
    for(int i=0;i<tc;i++)
        scanf("%d",&arr[i]);

    int sum=0;
    for(int i=0;i<tc;i++){
        if(a=arr[i]/3)
            sum+=a*3;
    }

    printf("%d\n",sum);
}
