#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int a,b;
    for(int i=0;i<tc;i++){
        scanf("%d %d",&a,&b);

        while(b){
            if(a<=1000){
                a=a+1000;
                b--;
            }
            else{
                a=a*2;
                b--;
            }
        }

        printf("%d\n",a);
    }


}
