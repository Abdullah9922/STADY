//https://judge.beecrowd.com/en/problems/view/1187

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


    int p=1,y=10;
    for(int i=0;i<5;i++){
        for(int j=p;j<=y;j++)
            sum=sum+arr[i][j];
            y--;
            p++;
    }




    if(A=='S')
        printf("%.1lf\n",sum);
    else if(A=='M')
        printf("%.1lf\n",sum/30.0);


}



