#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);

        int temp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }

        int sum=0,count=1;
        for(int i=0;i<n-1;i++){
            sum+=a[i]+a[count];
            count++;
        }
        printf("%d\n",sum);
    }

}
