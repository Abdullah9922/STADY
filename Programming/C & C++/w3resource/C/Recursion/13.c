#include<stdio.h>

int LCM(int ,int );

int main()
{
    int a,b,ans;
    scanf("%d %d",&a,&b);
    if(a<b)
        ans= LCM(a,b);
    else
        ans= LCM(b,a);
    printf("The LCM of %d and %d :  %d",a,b,ans);
}


int LCM(int a,int b)
{
    static int i=0;
    i+=b;
    if((i%a==0 && i%b==0))
        return i;
    else
        return (LCM(a,b));

}
