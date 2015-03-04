#ifndef __AMD_MANTLE_TYPES_H__
	#define __AMD_MANTLE_TYPES_H__
	#include <inttypes.h>

	// Define data types
	#if defined(_WIN32) || defined(_WIN64)
		typedef unsigned char GR_UINT8;
		typedef unsigned short GR_UINT16;
		typedef unsigned int GR_UINT32;
		typedef unsigned __int64 GR_UINT64;
		typedef GR_UINT32 GR_PYSICAL_GPU;

		#ifndef __cplusplus
			typedef GR_UINT8 bool;
		#endif
	#endif

	#define GR_WSI_WINDOWS
	#define GR_BORDER_COLOR_PALETTE
	#define GR_DMA_QUEUE
	#define GR_ADVANCED_MSAA
	#define GR_TIMER_QUEUE
	#define GR_INFO_TYPE_MEMORY_REQUIREMENTS
	#define GR_NULL_HANDLE
	#define GR_PHYSICAL_GPU
	#define UNKNOWN
	#define GR_API_VERSION "0.24.0"
	#define GR_MAX_PHYSICAL_GPUS 8

	#define GR_SUCCESS 0
	//#define GR_UNSUPPORTED_API 69660

	typedef struct GR_APPLICATION_INFO {
		const char* pAppName	= "";
		const char* pEngineName = "";
		const char* apiVersion	= "0.0.0";
	} GR_APPLICATION_INFO;

	typedef signed int GR_RESULT;
#endif