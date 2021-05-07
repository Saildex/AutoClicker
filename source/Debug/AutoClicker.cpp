#include <Windows.h>
#include <iostream>


using namespace std;

void clicker()
{
	setlocale(LC_ALL, "rus");

    while (true)
    {
        if (GetKeyState('V'))
        {

        	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        	Sleep(5);
        	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        }
        Sleep(1);

    }
}
int main(){
	clicker();
}
