#include<stdio.h>
int main()
{
    //double d;
    int a[10];
    int sum=0;
    int j=0;

    for(int i=0; i<7; ++i){
        int as;
        scanf("%d",&as);
        sum+=as;
        if(as>40){
            a[j]=as;
            ++j;
        }

    }

    printf("AVG: %lf\n",(sum/7.0));
    for(int i=0; i<j; ++i){
        printf("%d ",a[i]);
    }
}
