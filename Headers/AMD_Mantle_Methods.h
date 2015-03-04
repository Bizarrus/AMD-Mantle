#ifndef __AMD_MANTLE_METHODS_H__
	#define __AMD_MANTLE_H__
	#include <Windows.h>

	#ifndef MANTLE_DLL
		#if _WIN64
			HMODULE MANTLE_DLL = LoadLibraryA("mantle64.dll");
		#else
			HMODULE MANTLE_DLL = LoadLibraryA("mantle32.dll");
		#endif
	#endif

	typedef GR_RESULT (*_grInitAndEnumerateGpus)(GR_APPLICATION_INFO* appInfo, GR_UINT32* unknown, GR_UINT32* gpuCount, GR_UINT32* gpuIndex);
	_grInitAndEnumerateGpus grInitAndEnumerateGpus = (_grInitAndEnumerateGpus)GetProcAddress(MANTLE_DLL, "grInitAndEnumerateGpus");
#endif