#include<stdio.h>

struct book
{
    char title [20];
    char author [20];
    float price;
}b[3];


int main()
{
    for(int i=1;i<=3;i++){
        scanf("%s",b[i].title);
        fflush(stdin);
    }

    for(int i=1;i<=3;i++){
        scanf("%s",b[i].author);
        fflush(stdin);
    }

    for(int i=1;i<=3;i++){
        scanf("%f",b[i].price);
        fflush(stdin);
    }


    struct book m;
    if(b[1].price >=b[2].price && b[1].price >=b[3].price)
        m=b[1];
    else if(b[2].price>=b[3].price && b[2].price>=b[1].price)
        m=b[2];
    else
        m=b[3];


    struct book l;
    if(b[1].price <=b[2].price && b[1].price <=b[3].price)
        l=b[1];
    else if(b[2].price<=b[3].price && b[2].price<=b[1].price)
        l=b[2];
    else
        l=b[3];



    printf("\nMost Expensive Book:\n");
    printf("Title: %s\n",m.title);
    printf("Author: %s\n",m.author);
    printf("Price: %d\n",m.price);

    printf("\nLowest Priced Book:\n");
    printf("Title: %s\n",l.title);
    printf("Author: %s\n",l.author);
    printf("Price: %d\n",l.price);

}

