#include<stdio.h>
int main()
{
    int x,p;
    scanf("%d %d",&x,&p);

    int a[x];
    for(int i=0;i<x;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<x;i++){
        if(a[i]==p){
            printf("Senti Aunti Ramva will never be mine\n");
            return 0;
        }
    }

    printf("Senti Aunti Ramva is mine\n");

}
