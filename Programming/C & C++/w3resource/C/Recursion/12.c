#include<stdio.h>

void prm(int);

int main()
{
    int n;
    scanf("%d",&n);
    prm(n);
}

void prm(int n)
{
    static int i=2;

    if(i==n)
        printf("The number is a prime number.");
    else{

        if(n%i==0)
            printf("The number is not a prime number.");

        else{
            i++;
            prm(n);
        }
    }

}
