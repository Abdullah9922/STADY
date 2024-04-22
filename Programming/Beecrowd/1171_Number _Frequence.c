//https://judge.beecrowd.com/en/problems/view/1171
#include<stdio.h>
int  main()
{
    int n;
    scanf("%d",&n);

    int cont;
    int fr1[n];

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        fr1[i]=-1;
    }

    int temp;
    temp=a[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }



    for(int i=0;i<n;i++){
        cont=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cont++;
                fr1[j]=0;
            }
        }
        if(fr1[i]!=0)
            fr1[i]=cont;
    }

    for(int i=0;i<n;i++){
        if(fr1[i]!=0)
            printf("%d aparece %d vez(es)\n",a[i],fr1[i]);
    }

}
