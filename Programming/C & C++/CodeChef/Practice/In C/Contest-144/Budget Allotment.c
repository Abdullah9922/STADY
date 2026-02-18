#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,x;
    while(tc--){
        scanf("%d %d",&n,&x);

        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==x) continue;
                else{
                   if(a[i]>a[j]){
                        while(a[i]!=x || a[j]!=x){
                            a[i]--;
                            a[j]++;
                        }
                   }

                   else if(a[i]<a[j]){
                        while(a[i]!=x || a[j]!=x){
                            a[i]++;
                            a[j]--;
                        }
                   }
                   else{
                        while(a[i]!=x || a[j]!=x){
                            j++;

                            if(a[i]>a[j]){
                                while(a[i]!=x || a[j]!=x){
                                    a[i]--;
                                    a[j]++;
                                }
                            }

                            else if(a[i]<a[j]){
                                while(a[i]!=x || a[j]!=x){
                                    a[i]++;
                                    a[j]--;
                                }
                            }
                            else continue;
                        }
                   }
                }
            }
        }

    }
}
