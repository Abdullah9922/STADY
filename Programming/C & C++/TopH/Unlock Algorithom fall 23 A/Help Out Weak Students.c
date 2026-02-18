#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int a,b[tc];
    for(int i=0;i<tc;i++)
        scanf("%d %d",&a,&b[i]);

    int temp;
    for(int i=0;i<tc;i++){
        for(int j=i+1;j<tc;j++){
            if(b[i]>b[j]){
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }

    int sum=0;
    for(int i=0;i<3;i++)
        sum+=b[i];

    if(sum<150) printf("Counseling Support Required\n");
    else{
        printf("Counseling Support Not Required\n");
        for(int i=0;i<3;i++)
            printf("%d ",b[i]);
    }




}
