#include<stdio.h>
int main()
{
    int temp;
    char a[100],b[100];
    gets(a);
    gets(b);

    for(int i=0;i<NULL;i++){
        for(int j=1;j<NULL-i;j++){
            if((strcmp(a[j],b[j]))>0){
                strcpy(temp,a[j]);
                strcpy(a[j],b[j]);
                strcpy(b[j],temp);
            }
        }
    }

    for(int i=0;i<NULL;i++)
        printf("%s\n",a[i]);

}
