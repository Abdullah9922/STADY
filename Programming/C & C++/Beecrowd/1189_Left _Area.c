//https://judge.beecrowd.com/en/problems/view/1189

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

    int n=11,o=1;
    for(int i=0;i<5;i++){
        for(int j=o;j<n;j++)
            sum=sum+arr[j][i];
        n--;
        o++;
    }




    if(A=='S')
        printf("%.1lf\n",sum);
    else if(A=='M')
        printf("%.1lf\n",sum/30.0);


}





