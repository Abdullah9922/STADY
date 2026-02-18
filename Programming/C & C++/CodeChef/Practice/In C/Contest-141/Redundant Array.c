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

        int count,temp=0,temp2;
        for(int i=0;i<n;i++){
            count=0;
            for(int j=0;j<n;j++){
                if(a[i]==a[j])
                    count++;
            }
            if(count>temp){
                temp=count;
                temp2=a[i];
            }
        }
        //printf("%d %d",temp,temp2);





    }
}
