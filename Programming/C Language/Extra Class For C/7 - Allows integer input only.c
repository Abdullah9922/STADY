#include<stdio.h>
int main()
{
    int x;
    x=fun();
    printf("\nYour integer number is: %d\n\n",x);
}


int fun(void)
{
    int num=0,ch;
    do{
        ch=getch();
        if(ch>=48 && ch<=57){
            printf("%c",ch);
            num=num*10+(ch-48);
        }
        if(ch==13)
            break;
    }while(1);
    return (num);
}
