#include<windows.h>
int main()
{
    COORD c;
    c.X=20;
    c.Y=14;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    printf("ABDULLAH");

}
