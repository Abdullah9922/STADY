#include<stdio.h>

struct book{
    int bookid;
    char title[20];
    float price;
};

struct book input()
{
    struct book b;
    printf("Enter Book id, title and price:\n");
    scanf("%d",&b.bookid);
    fflush(stdin);
    gets(b.title);
    scanf("%f",&b.price);
}

void display(struct book b)
{
    printf("\n%d  %s  %f",b.bookid,b.title,b.price);
}


void main()
{
    struct book B;
    B=input();
    display(B);
}
