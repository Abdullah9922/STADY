
#include<stdio.h>
int main()
{
    int n,pos=0,lrg=0,lrg2nd;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Your input numbers are: ");
    for(int i=0;i<n;++i)
        printf("%d ",a[i]);


    for(int i=0;i<n;i++){
        if(lrg>a[i]){
            lrg=a[i];
            pos=i;
        }
    }

    for(int i=1;i<=n;i++){
        if(i==pos){
            i++;
            i--;
        }
        else{
            if(lrg2nd<a[i])
                lrg2nd=a[i];
        }
    }

    printf("\n2nd Lergestnumber in the arry is %d\n\n",lrg2nd);

}
