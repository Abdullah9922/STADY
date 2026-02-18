#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);

    int n;
    for(int i=0;i<tc;i++){
        scanf("%d",&n);

        char a[n];
        for(int j=0;j<n;j++)
            scanf("%c",&a[j]);

        int cont=0;
        for(int j=0;j<n-1;j++){

            if(a[i]==a[i+1]){
                cont++;
                j++;
            }
        }

        printf("%d\n",n-cont);

    }
}
