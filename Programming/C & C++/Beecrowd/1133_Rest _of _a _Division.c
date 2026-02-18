//https://judge.beecrowd.com/en/problems/view/1133
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    if(a>0 && b>0){
        if(a<b){
            for(int i=a+1;i<b;i++){
                if(i%5==2 || i%5==3)
                    printf("%d\n",i);
            }
        }

        else if(a>b){
            for(int i=b+1;i<a;i++){
                if(i%5==2 || i%5==3)
                    printf("%d\n",i);
            }
        }

    }

}
