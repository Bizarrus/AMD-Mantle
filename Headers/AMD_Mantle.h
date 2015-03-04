#ifndef __AMD_MANTLE_H__
	#define __AMD_MANTLE_H__
	
	#ifndef MANTLE
		#if defined(_WIN32) || defined(_WIN64)
			#ifdef __cplusplus
				#define MANTLE extern "C" __declspec(dllimport)
			#else
				#define MANTLE __declspec(dllimport)
			#endif
		#endif
	#endif

	#include <assert.h>
	#include "AMD_Mantle_Types.h"
	#include "AMD_Mantle_Methods.h"
#endif
