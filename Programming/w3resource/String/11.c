#include<stdio.h>
#include<stdio.h>
int main()
{
    int i,l,temp=0;
    char a[100];
    gets(a);
    printf("Your string is: %s\n",a);

    l=strlen(a);

    printf("\nYour 2nd string is: \n");  //himel
    for(int i=0;i<=l;i++){
        for(int j=1;j<=l;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("%s",a);

}
