#include<stdio.h>
#include<math.h>

int main()
{
    int tc;
    scanf("%d",&tc);

    int x;
    while(tc--){
        scanf("%d",&x);

//        int temp=x/2;   // x=16,
//        int a=pow(2,temp);
//        if(a==x) printf("0\n");

        for(int i=0;i<=100;i++){
            if(pow(2,i)==x)
                printf("0\n");
        }


    }
}
