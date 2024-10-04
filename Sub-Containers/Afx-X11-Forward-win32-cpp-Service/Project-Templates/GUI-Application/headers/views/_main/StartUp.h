#ifndef STARTUP_H
#define STARTUP_H

#define WIN32_LEAN_AND_MEAN                     // Exclude rarely used stuff from the SDK
#include <windows.h>                            // SDK MingW
#include "../../../headers/views/_main/WinMain.h"

 //#include "../../../Resource/resource.h"         // Our resource files

// Forward declarations of functions included in this code module:
LRESULT static CALLBACK    WndProcDispatcher(HWND, UINT, WPARAM, LPARAM);				// Note static because we are going to route/dispatch to the correct WndProc(the one of the class object) via this function
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);



#endif
