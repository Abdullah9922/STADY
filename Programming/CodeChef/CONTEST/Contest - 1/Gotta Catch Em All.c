#include<stdio.h>
int main()
{
    int a,b,c,n,sum=0,cont=0;
    int arr[100],arr2[100];
    scanf("%d",&n);

    for(int i=0;i<n;i++){

        for(int j=0;j<1;j++)
            scanf("%d %d %d",&a,&b,&c);

        for(int j=0;j<a;j++)
            scanf("%d",&arr[j]);

        for(int j=0;j<a;j++){
            if(arr[j]*b>c){
                arr2[j]=arr[j];
                arr[j]=0;
                cont++;
            }
        }

        for(int j=0;j<a;j++){
            sum=sum+(arr[j]*b);
        }

        sum=sum+(cont*c);
        cont=0;

        printf("%d\n",sum);
        sum=0;

    }
}
