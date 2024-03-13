#include<stdio.h>

int LCM(int ,int );

int main()
{
    int a,b,ans;
    scanf("%d %d",&a,&b);

    ans= LCM(a,b);

    printf("The LCM of %d and %d :  %d",a,b,ans);
}


int LCM(int a,int b)
{
    static int i=2,x=1,x2=1;
    if(i==(a>b?b:a)){
        if(a%i==0 && b%i==0){
            x=i;
            x2=x2*x;
            i++;
            LCM(a,b);
        }
        else{
            i++;
            LCM(a,b);
        }
    }
    else
        return x2;
}
