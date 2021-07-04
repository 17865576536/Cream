#pragma once


#ifdef CR_PLATFORM_WINDOWS
	#ifdef CR_BUILD_DLL
		#define CREAM_API __declspec(dllexport)
	#else
		#define CREAM_API __declspec(dllimport)
	#endif // DEBUG

#else
	#error only CR suppost! 

#endif // CR_PLATFORM_WINDOWS
