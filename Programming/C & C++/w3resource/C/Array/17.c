#include<stdio.h>
int main()
{
    int n,pos=0,sml,sml2nd;
    scanf("%d",&n);

    int a[n];
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);

    printf("Your element: ");
    for(int i=1;i<=n;i++)
        printf("%d ",a[i]);

    sml=a[0];
    for(int i=1;i<=n;i++){
        if(a[i]<sml){    //5 8 7 3 6 2
            sml=a[i];
            pos=i;
        }
    }

    sml2nd=9999;
    for(int i=1;i<=n;i++){
        if(pos==i){
            i++;
            i--;
        }
        else if(sml2nd>a[i]){
            sml2nd=a[i];
        }
    }

    printf("\n2nd Smallest number is: %d\n\n",sml2nd);

}
