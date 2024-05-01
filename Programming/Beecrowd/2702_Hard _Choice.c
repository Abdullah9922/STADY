//https://judge.beecrowd.com/en/problems/view/2702
#include<stdio.h>
int main()
{
    int Ca,Ba,Pa,Cr,Br,Pr,a1,a2,a3,A;
    scanf("%d %d %d %d %d %d",&Ca,&Ba,&Pa,&Cr,&Br,&Pr);

    if(Cr-Ca>=0) a1=Cr-Ca;
    if(Br-Ba>=0) a2=Br-Ba;
    if(Pr-Pa>=0) a3=Pr-Pa;
    A=a1+a2+a3;

    printf("%d\n",A);

}
