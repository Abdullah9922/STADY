#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        int v[n],a[n];
        for(int i=0;i<n;i++)
            scanf("%d %d",&v[i],&a[i]);

        int max_str=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int str=a[i]*v[j]+v[i]*a[j];
                if(str>max_str)
                    max_str=str;
            }
        }
        printf("%d\n",max_str);
    }
}
