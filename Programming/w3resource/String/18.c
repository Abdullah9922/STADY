#include<stdio.h>
int main()
{
    char c,cnt=0,a[100];
    gets(a);

    printf("\n\nYour string is: %s\n",a);

    printf("\nInput your choice: ");
    scanf("%c",&c);

    for(int i=0;a[i]!=NULL;i++){
        if(a[i]==c)
            cnt++;
    }

    printf("\nThe frequency of '%c' is : %d\n\n",c,cnt);
}
