//https://judge.beecrowd.com/en/problems/view/1097
#include<stdio.h>
int main()
{
    int I,J;
    for(I=1;I<=9;I=I+2){//1
        for(J=I+6;J>((I+6)-3);J--)
            printf("I=%d J=%d\n",I,J);//1 7
    }
}
