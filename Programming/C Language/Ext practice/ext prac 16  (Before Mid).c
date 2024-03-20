#include<stdio.h>
int main()
{
    int n;
    scanf("%d ",&n);

    int a[n];
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);


    int cont=0,j=1;
    int b[j];
    for(int i=1;i<=n;i++){
        if(a[i]<=20){
            b[j]=a[i];
            j++;
            cont++;
        }
    }
    if (cont==n)
        printf("Saved All\n");

    else{
        printf("Only few are save and following are dead: \n");
        for(int i=1;i<=cont;i++){
            printf("%d ",b[i]);
        }
    }

}
