#include<stdio.h>
int main()
{
    int A=5,B=7,C=4,D=8,E=9;

    //C-=B|E&&D&A%D%C*B;
    //E=A+(++C/D)*(E&8)-(D|B);
    A=A*(A==B?(C*D)&&E:(C*D)%B);

    printf("%d",A);
}
