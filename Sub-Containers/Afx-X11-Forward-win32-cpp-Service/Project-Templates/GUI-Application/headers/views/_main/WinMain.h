#ifndef STARTUP_H
#define STARTUP_H

#define WIN32_LEAN_AND_MEAN                     // Exclude rarely used stuff from the SDK
#include <windows.h>                            // SDK MingW

/*

Code Organization Strategy
--------------------------------------------------------------------------------------------------------------------------------
To enhance code organization and clarity, I follow a structured approach for managing headers and function visibility:

	1) 	Namespace Usage: All headers are included within a dedicated namespace to group related functionality and prevent
		naming conflicts.
	
	2)	Namespace Aliases: I create aliases (e.g., namespace WNAPI = WindowNAPI;) for easier access to namespace functions.

    3)	Public Header Files: When needed, a public header is provided outside the namespace to explicitly expose specific 
		functions for external use.
		
		-	Implementation:
			Function Redirection: In the public header, I define inline functions that redirect calls to the corresponding 
			functions within the namespace. This design allows for a clean and explicit exposure of functionality while keeping 
			the internal implementation details encapsulated.

By implementing this method, I achieve a well-organized codebase that clearly delineates internal and external functionality, 
improving maintainability and usability for other developers.
--------------------------------------------------------------------------------------------------------------------------------		
*/


//#include "../../../resource/resource.h"         // Our resource files

class MainWin
{
private:
	static INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);		// Callbacks should be defined static(preferred)  or as free function because they are called by the WIN32 system(requirement of WIN32) 
																								// https://stackoverflow.com/questions/21369256/how-to-use-wndproc-as-a-class-function
																								// https://www.codeproject.com/Articles/17894/Simple-Mapping-of-WndProc-to-your-Specific-Class-W

private:
	HINSTANCE	m_hInstance;
	HWND		m_hWnd ;
	LPCTSTR		m_szTitle;
	LPCTSTR 	m_szWindowClass;

	inline void SetHwnd (const  HWND hWnd)						{ m_hWnd = hWnd;}
	inline void SetHinstance( const HINSTANCE& hinst)			{ m_hInstance = hinst; }
	inline void SetTitle(const LPCTSTR& szTitle)				{ m_szTitle = szTitle; }
	inline void SetWindowClass(const LPCTSTR& szWindowClass)	{ m_szWindowClass = szWindowClass; }

	BOOL InitInstance( int nCmdShow);


public:

	// Tors
	MainWin();
	~MainWin();
	
	LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);			// Exception, not static because direct called from: WndProcDispatcher()
	
	inline HINSTANCE GetInstance() const						{ return m_hInstance;}
	inline HWND GetHwnd() const									{ return m_hWnd; }
	inline LPCTSTR  GetTitle() const								{ return m_szTitle; }
	inline LPCTSTR  GetWindowClass() const						{ return m_szWindowClass; }

	ATOM DefineWindow(HINSTANCE hInstance, WNDPROC WndProc, LPCTSTR szTitle, LPCTSTR szWindowClass);
	bool CreateTheWindow( int nCmdShow, HACCEL outHAccel );
};


#endif