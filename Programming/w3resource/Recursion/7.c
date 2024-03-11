#include<stdio.h>


int LCM(int,int);

int main()
{
    int a,b,ans;
    scanf("%d %d",&a,&b);

    ans=LCM(a,b);

    printf("The LCM of %d and %d is: %d",a,b,ans);
}



int LCM(int a,int b)
{
    if (b==0)
        return a;
    else
        return LCM(b,a%b);

}
