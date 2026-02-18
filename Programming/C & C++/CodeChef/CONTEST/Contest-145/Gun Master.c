#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n,d;
    while(tc--){
        scanf("%d %d",&n,&d);

        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);

        int s=0,hold=1;
        for(int i=0;i<n;i++){

            if(a[i]<=d){
                if(!hold){
                    s++;
                    hold=1;
                }
            }

            else {
                if(hold){
                    s++;
                    hold=0;
                }
            }
        }
        printf("%d\n",s);
    }
}
