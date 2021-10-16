#pragma once

#ifdef CORE_EXPORTS
#	define _CoreExport __declspec(dllexport)
#	define CORE_TEMPLATE_API
#else
#	define _CoreExport __declspec(dllimport)
#	define CORE_TEMPLATE_API extern
#endif

//#ifndef CORE_EXPORTS
//#	ifdef _DEBUG
//#		pragma comment(lib, "CppPropertyLib.lib")
//#	else
//#		pragma comment(lib, "CppPropertyLib.lib")
//#	endif
//#endif

class _CoreExport CustomAlloc
{
public:

	// TODO: override the alloc functions to use memory pool
};