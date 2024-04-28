//https://judge.beecrowd.com/en/problems/view/2840

#include<stdio.h>
int main()
{
    int R, L;
    scanf("%d %d",&R,&L);

    double vpb=(4.0/3.0)*3.1415*R*R*R;
    int num=L/vpb;

    printf("%d\n",num);
}
