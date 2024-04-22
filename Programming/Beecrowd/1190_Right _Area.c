//https://judge.beecrowd.com/en/problems/view/1190
#include<stdio.h>
int main()
{
    char A;

    double arr[12][12], sum=0.0;

    scanf("%c",&A);

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++)
            scanf("%lf",&arr[i][j]);
    }

    for(int i=11;i>6;i--){
        for(int j=i-1;j>=12-i;j--)
            sum=sum+arr[j][i];
    }

    if(A=='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/30.0);

}
