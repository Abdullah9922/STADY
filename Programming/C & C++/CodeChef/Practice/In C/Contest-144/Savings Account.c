#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int x,y,z;
    while(tc--){
        scanf("%d %d %d",&x,&y,&z);

        int count=0;
        int income=x*y;

        if(income==z)
            printf("0\n");

        else if(income<z)
            printf("0\n");

        else{
            while(income>z){
                x=x-1;
                income=x*y;
                count++;
            }
            printf("%d\n",count);
        }
    }
}
