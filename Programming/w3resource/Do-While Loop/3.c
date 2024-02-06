#include<stdio.h>
int main()
{
    int i=1,s=0,j=1,c=0;
    do
    {
        i++;
        if(i%2!=0)
            printf("%d\n",i);
    }
    while(i<=50);
    s+=i;
    printf("Sum of odd = %d\n",s);

    do
    {
        j++;
        if(j%2==0)
            printf("%d\n",j);
    }
    while(j<=50);
    c+=j;
    printf("Sum of Even = %d\n",c);
}
