#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int a2[n];
    for(int i=0;i<n;i++)
        a2[i]=a[i];

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a2[j])  // 1 2 5 1 2 3
                a2[j]=0;
        }
    }

//    printf("\n");
//    for(int i=0;i<n;i++)
//        printf("%d ",a2[i]);
//    printf("\n\n");

    int countM=0,count=0;
    for(int i=0;i<n;i++){
        if(a2[i]==0) continue;
        for(int j=0;j<n;j++){
            if(a2[i]==a[j])
                count++;
        }
        countM=countM+count%2;
        count=0;
        //printf("\n\n-->%d :: i=%d :: a[i]=%d :: count=%d<--\n\n",countM,i,a2[i],count);
    }

    printf("%d\n",countM);
}
