#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    int sum=0;
    for(int i=0;i<tc;i++){
        scanf("%d",&n);

        int a[n];
        for(int j=0;j<n;j++)
            scanf("%d",&a[j]);

        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[j]<a[k]){
                    int temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }


        if(n%2!=0){
            for(int l=0;l<=(n/2);l++)
                sum=sum+a[l];

            for(int j=((n/2)+1);j<n;j++)
                sum-=a[j];
        }
        else{
            for(int j=0;j<=((n/2)-1);j++)
                sum+=a[j];
            for(int j=(n/2);j<n;j++)
                sum-=a[j];
        }

        printf("%d\n",sum);
        sum=0;
    }


}

