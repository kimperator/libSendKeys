#include "../SendMouse.h"
#include <windows.h>
#include <cstdlib>

int main(int argc, char* argv[])
{
	CSendMouse m;
	for(int i=0; i< 600; i++)
	{
		m.ClickL(rand() % 500, rand() % 500);
		Sleep(rand() % 500);
	}
	return 0;
}