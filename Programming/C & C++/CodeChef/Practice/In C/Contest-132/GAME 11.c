#include<stdio.h>
#include<stdlib.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    for(int t=0;t<tc;t++){
        int n,m;
        scanf("%d %d",&n,&m);

        int a[n],b[m];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);

        for(int i=0;i<m;i++)
            scanf("%d",&b[i]);

        // Sort arrays a and b
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]<a[j]){
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                if(b[i]<b[j]){
                    int temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }

        // Calculate the sum of top 4 elements from both arrays
        int sum=0;
        for(int i=0;i<4;i++) sum+=a[i];
        for(int i=0;i<4;i++) sum+=b[i];

        // Add the remaining elements from both arrays
        int arr[n+m-8];
        int x=0;
        for(int i=4;i<(n);i++){
            arr[x]=a[i];
            x++;
        }

        for(int i=4;i<(m);i++){
            arr[x]=b[i];
            x++;
        }

        // Sort the remaining elements
        for(int i=0;i<x;i++){
            for(int j=i+1;j<x;j++){
                if(arr[i]<arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }

        // Add the top 3 elements from the remaining array
        for(int i=0;i<3 && i<x;i++) sum+=arr[i];

        if (n<4 || m<4) printf("-1\n");
        else printf("%d\n",sum);

    }
    return 0;
}
