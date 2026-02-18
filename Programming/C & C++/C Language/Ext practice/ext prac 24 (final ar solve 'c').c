#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    float a,b,c,avg,temp=999999.0;
    float arr[3]={0.0,0.0,0.0};
    while(n--){
        scanf("%f %f %f",&a,&b,&c);
        avg=(a+b+c)/3;
        if(temp>avg){
            temp=avg;
            arr[0]=a;
            arr[1]=b;
            arr[2]=c;
        }
    }
    // bondu chap kaoaba na?
    printf("%.2f\n",temp);
    for(int i=0;i<3;i++)
        printf("%.1f ",arr[i]);
}
