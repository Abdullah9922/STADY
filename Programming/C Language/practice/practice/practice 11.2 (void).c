#include<stdio.h>
#include<conio.h>
int main()
{
    void add(void); // take nothing return nothing
    add();
}

void add()
{
    int a,b,s;
    printf("Enter two number");
    scanf("%d%d", &a,&b);
    s=a+b;
    printf("Sum=%d",s);

}
