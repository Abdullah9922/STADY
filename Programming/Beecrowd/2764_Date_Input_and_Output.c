//https://judge.beecrowd.com/en/problems/view/2764
#include<stdio.h>
int main()
{
    int a,b,c;
    char ch1, ch2;
    scanf("%02d",&a);
    scanf("%c",&ch1);
    scanf("%02d",&b);
    scanf("%c",&ch2);
    scanf("%02d",&c);

    printf("%02d/%02d/%02d\n",b,a,c);
    printf("%02d/%02d/%02d\n",c,b,a);
    printf("%02d-%02d-%02d\n",a,b,c);

}
