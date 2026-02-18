#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int age;
    float marks;
}s[2];


int main()
{
    struct student s[2];
    for(int i=1;i<=2;i++){
        scanf("%s",s[i].name);
        fflush(stdin);
    }

    for(int i=1;i<=2;i++){
        scanf("%d",&s[i].age);
        fflush(stdin);
    }

    for(int i=1;i<=2;i++){
        scanf("%f",&s[i].marks);
        fflush(stdin);
    }


    printf("Students name:\n");
    for(int i=1;i<=2;i++)
        printf("%s\n",s[i].name);

    printf("Students age:\n");
    for(int i=1;i<=2;i++)
        printf("%d\n",s[i].age);

    printf("Students marks:\n");
    for(int i=1;i<=2;i++)
        scanf("%.2f\n",s[i].marks);

    printf("Average mark= %.2f",(s[1].marks+s[2].marks)/2);


}
