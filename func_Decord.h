#include <iostream>
#include <conio.h>
#include <windows.h>
//Funciones de decoracion;
void gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }
void SetColor(int ForgC)
    {
    WORD wColor;

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;

                          //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
                    //Mask out all but the background attribute, and add in the forgournd color
         wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
         SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
};
