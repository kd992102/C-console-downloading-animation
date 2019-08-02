#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y){
    COORD pos = {x,y};
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOut, pos);
}

void downloading(){
    int i=0;
    gotoxy(0,0);
    printf("%c",'[');
    gotoxy(101,0);
    printf("%c", ']');
    gotoxy(102,0);
    printf("[%2d%c]", i, '%');
    while(i<100){
        Sleep(100);
        gotoxy(i+1,0);
        printf("%c",'=');
        i++;
        gotoxy(107,0);
        printf("\b \b");
        printf("\b \b");
        printf("\b \b");
        printf("\b \b");
        printf("%2d%c%c", i, '%', ']');
    }
}

void loading(){
    printf("Loading");
    printf("......");
    while(1){
        Sleep(250);
        printf("\b \b");
        Sleep(250);
        printf("\b \b");
        Sleep(250);
        printf("\b \b");
        Sleep(250);
        printf("\b \b");
        Sleep(250);
        printf(".");
        Sleep(250);
        printf(".");
        Sleep(250);
        printf(".");
        Sleep(250);
        printf(".");
    }
}

int main(){
    downloading();
    getchar();
}