#include<stdio.h>

int findlarger(int *,int*);

int main(void)
{
    int n1,n2,rusalt;
    scanf("%d %d",&n1,&n2);

    rusalt = findlarger(&n1,&n2);

    printf("The larger number is: %d",rusalt);

}


int findlarger (int *n1,int *n2)
{
    if(*n1>*n2)
        return *n1;
    else
        return *n2;
}
