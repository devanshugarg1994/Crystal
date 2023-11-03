#pragma once

#ifdef CY_PLATFORMS_WINDOW
	#ifdef CY_BUILD_DLL
		#define CY_API __declspec(dllexport)
	#else
		#define CY_API __declspec(dllimport)
	#endif 
#else 
	#error Crystal Support Windows For now
#endif