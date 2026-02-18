#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
        a2[i]=a[i];

    int temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

//    printf("\n\n");
//    for(int i=0;i<n;i++)
//        printf("%d ",a[i]);
//    printf("\n\n");

    int temp,sum=0,count=0;
    for(int i=0;i<n;i++){       // 2 3 5 7 11
        for(int j=0;j<n;j++){   // 7 5 3 11 2
             if(a[i]!=a2[j])
                count++;
             else{




                break;
             }
        }
        sum+=count;
    }

}
