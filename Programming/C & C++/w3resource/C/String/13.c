#include<stdio.h>
int main()
{
    int s,e,cont=0,j=0;
    int a[100],b[50];
    gets(a);

    scanf("%d %d",&s,&e);

    for(int i=s;i<=e;i++){
        b[j]=a[i];
        j++;
        cont++;
    }

    for(int i=0;i<cont;i++)
        printf("%s",b[i]);


}
