#ifndef APPABOUT_H
#define APPABOUT_H

#define WIN32_LEAN_AND_MEAN                     // Exclude rarely used stuff from the SDK
#include <windows.h>                            // SDK MingW


 //#include "../../../resource/resource.h"         // Our resource files

class AppAbout
{
public:
	AppAbout(){}
	~AppAbout(){}

public:

	// Callbacks should be defined static(preferred) or as free function because they are called by the WIN32 system(requirement of WIN32) 
	// https://stackoverflow.com/questions/21369256/how-to-use-wndproc-as-a-class-function
	// https://www.codeproject.com/Articles/17894/Simple-Mapping-of-WndProc-to-your-Specific-Class-W
	
	static  INT_PTR CALLBACK CB_About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);
};

#endif