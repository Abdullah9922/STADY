#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    while(tc--){
        scanf("%d",&n);

        int arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        int total=0;
        for(int i=0;i<n;i++)
            total += arr[i];

        int pass = ((n+1)*100) * .5;
        //printf("%d  %d",total,pass);

        if(pass-total>100) printf("-1\n");
        else if(pass-total<0) printf("0\n");
        else if(pass - total == 0 ) printf("0\n");
        else printf("%d\n",pass - total);
    }
}
