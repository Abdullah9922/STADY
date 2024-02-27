#include<stdio.h>
int main()
{
    int i=1,j,oct=0,n;
    scanf("%d",&n);

    for( j=n ; j>0 ; j=j/8 ){
        oct = oct + ( j % 8 ) * i;
        i=i*10;
    }
    printf("%d",oct);

}
