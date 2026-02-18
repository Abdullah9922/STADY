#include<stdio.h>

int fib(n)
{
    static int pre_num=0;
    static int next_num=1;
    static int num;

    num=pre_num+next_num;
    printf("%d ",num);

    pre_num=next_num;
    next_num=num;

    if(n==0)
        return 0;
    else fib(n-1); // return (fib(n-1)+fib(n-2));

}


int main()
{
    int n;
    scanf("%d",&n);

    fib(n);
}



//int fibo(int prNo,int num)
//{
//    int nextNo;
//    static int i=1;
//
//    if(i==term)
//        return (0);
//    else{
//        nextNo=prNo+num;
//        num=nextNo;
//        prNo=num;
//        printf("%d  ",nextNo);
//        i++;
//        fibo(prNo,num);
//    }
//    return (0);
//}
