#pragma once

#ifdef ASPEN_STATIC
#define ASPEN_EVENTS_API
#else
#ifdef ASPEN_EVENTS_BUILD
#define ASPEN_EVENTS_API __declspec(dllexport)
#else
#define ASPEN_EVENTS_API __declspec(dllimport)
#endif
#endif

#include <cstdint>
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>
#undef min
#undef max
