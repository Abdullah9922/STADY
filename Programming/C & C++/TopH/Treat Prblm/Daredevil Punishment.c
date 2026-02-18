#include<stdio.h>
#include<string.h>

int main()
{
    long long int r;
    char y[10000],b[100];

    gets(y);
    gets(b);

    int conty=0;
    for(int i=0;y[i]!='\0';i++){
        if((int(y[i]))>=97 && (int(y[i]))<=122)
            conty++;
    }

    int contb=0;
    for(int i=0;b[i]!='\0';i++){
        if((int(b[i]))>=97 && (int(b[i]))<=122)
            contb++;
    }

    leny=strlen(y);
    lenb=strlen(b);


    if(leny==conty && lenb==contb){
        printf("kola");



    }

}
