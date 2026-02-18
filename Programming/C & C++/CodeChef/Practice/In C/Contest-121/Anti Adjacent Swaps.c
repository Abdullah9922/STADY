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
            for(int j=i+2;j<n;j++){
                if(a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }

        int flag=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1])
                flag++;
        }

//        printf("\n\n");
//        for(int i=0;i<n;i++)
//            printf("%d ",a[i]);
//        printf("\n\n");


        if(flag==0) printf("YES\n");
        else printf("NO\n");

    }
}
