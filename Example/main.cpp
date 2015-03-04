#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include "AMD_Mantle.h"

int main() {
	SetConsoleTitle(L"Mantle Example");

	GR_APPLICATION_INFO appInfo	= {};
	appInfo.pAppName			= "Example";
	appInfo.apiVersion			= GR_API_VERSION;

	GR_UINT32 gpuCount;
	GR_PYSICAL_GPU gpus[GR_MAX_PHYSICAL_GPUS];

	GR_RESULT result = grInitAndEnumerateGpus(&appInfo, &gpuCount, &gpuCount, &gpus[0]);

	if(result == GR_SUCCESS) {
		printf("GPU Count: %d\n", gpuCount);
	} else {
		printf("Error: %d", result);
	}

	getchar();

	return 0;
}