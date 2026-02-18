//https://judge.beecrowd.com/en/problems/view/1181
#include<stdio.h>
int main()
{
    int n;
    char A;

    double arr[12][12],sum=0.0;

    scanf("%d %c",&n,&A);

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&arr[i][j]);
        }
    }


    for(int i=0;i<12;i++)
        sum=sum+arr[n][i];

    if(A=='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/12);



}
