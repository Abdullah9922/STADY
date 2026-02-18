#include<stdio.h>
int main()
{
    int arr[7];

    for(int i=0;i<7;i++)
        scanf("%d",&arr[i]);

    int cont =0;
    for(int i=0;i<7;i++){
        if(arr[i]>35)
            cont++;
    }

    if(cont>3) printf("Heat-wave Burning\n");
    else printf("No more heat wave\n");

}
