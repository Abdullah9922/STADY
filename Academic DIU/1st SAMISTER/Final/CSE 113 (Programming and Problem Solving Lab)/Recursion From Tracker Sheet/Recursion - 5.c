#include<stdio.h>

int term;
int fibo(int, int );

int main()
{
    static int prNo = 0, num = 1;
    printf("\n\n Recursion : Print Fibonacci Series :\n");
	printf("-----------------------------------------\n");

    printf(" Input number of terms for the Series (< 20) : ");
    scanf("%d", &term);
    printf(" The Series are :\n");
    printf(" 1  ");
    fibo(prNo, num);
    printf("\n\n");
}


int fibo(int prNo,int num)
{
    int nextNo;
    static int i=1;

    if(i==term)
        return (0);
    else{
        nextNo=prNo+num;
        num=nextNo;
        prNo=num;
        printf("%d  ",nextNo);
        i++;
        fibo(prNo,num);
    }
    return (0);
}
