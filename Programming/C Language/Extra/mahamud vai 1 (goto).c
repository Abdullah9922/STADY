#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
 {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    gotoxy(40, 13);
    printf("ABDULLAH BOSS");
    getch();
    return 0;
}
