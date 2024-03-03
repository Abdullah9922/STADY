#include<stdio.h>
int main()
{
    int a1,b1,d=0;
    char a[100],b[100];
    gets(a);
    printf("Your input is: %s\n",a);

    gets(b);
    printf("\nYour input is: %s\n",b);

    for(int i=0;a[i]!=NULL;i++){
        for(int j=0;b[j]!=NULL;j++){
            if(a[i]==b[j]){
                d++;
            }
        }
    }
    a1=strlen(a);
    b1=strlen(b);

    if(a1==d && b1==d)
        printf("\nStrings are equal.");
    else
        printf("\nStrings not are equal.");


}

