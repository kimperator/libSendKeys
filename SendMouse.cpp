#include "SendMouse.h"
#define _WIN32_WINNT 0x0501
#include <windows.h>
CSendMouse::CSendMouse() {

}
CSendMouse::~CSendMouse() {

}
void CSendMouse::move(int x, int y)
{
	SetCursorPos(x, y);
}
void CSendMouse::ClickL() 
{
	INPUT Input[2];
    ZeroMemory(Input, sizeof(INPUT) * 2);
    Input[0].type = INPUT_MOUSE;
    Input[0].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

    Input[1].type = INPUT_MOUSE;
    Input[1].mi.dwFlags = MOUSEEVENTF_LEFTUP;
    SendInput(2, Input, sizeof(INPUT));
}
void CSendMouse::ClickL(int x, int y)
{
	move(x,y);
	ClickL();
}
void CSendMouse::ClickR()
{
	INPUT Input[2];
    ZeroMemory(Input, sizeof(INPUT) * 2);
    Input[0].type = INPUT_MOUSE;
    Input[0].mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;

    Input[1].type = INPUT_MOUSE;
    Input[1].mi.dwFlags = MOUSEEVENTF_RIGHTUP;
    SendInput(2, Input, sizeof(INPUT));
}
void CSendMouse::ClickR(int x, int y)
{
	move(x,y);
	ClickR();
}
