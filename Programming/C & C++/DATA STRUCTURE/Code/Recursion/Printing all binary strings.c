#include<stdio.h>

void bin(int n,char A[])
{
    if(n<1)
        printf("\n%s",A);
    else{
        A[n-1]='0';
        bin(n-1,A);
        A[n-1]='1';
        bin(n-1,A);
    }
}


int main()
{
    void bin(int , char[]);
    char A[11];
    A[10]='\0';
    bin(10,A);
}
