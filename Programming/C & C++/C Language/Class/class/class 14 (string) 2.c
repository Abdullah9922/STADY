#include<stdio.h>
int main()
{
    char a[100];
    gets(a);
    int a1=0,e1=0,i1=0,o1=0,u1=0;

    for(int j=0;a[j]!=NULL;j++){
        if(a[j]=='a')
            a1++;
        else if(a[j]=='e')
            e1++;
        else if(a[j]=='i')
            i1++;
        else if(a[j]=='o')
            o1++;
        else if(a[j]=='u')
            u1++;
    }
    printf("a ase %d ta\n",a1);
    printf("e ase %d ta\n",e1);
    printf("i ase %d ta\n",i1);
    printf("o ase %d ta\n",o1);
    printf("u ase %d ta\n",u1);

}
