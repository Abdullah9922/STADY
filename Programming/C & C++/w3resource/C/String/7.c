#include<stdio.h>
int main()
{
    int c=0,n=0,s=0;
    char str[100];
    gets(str);
    printf("Your input is: %s\n",str);

    for(int i=0;str[i]!=NULL;i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            c++;
        else if(str[i]>='0' && str[i]<='9')
            n++;
        else
            s++;
    }

    printf("\nNumber of Alphabets in the string is : %d\n", c);
    printf("Number of Digits in the string is : %d\n", n);
    printf("Number of Special characters in the string is : %d\n\n", s);


}

