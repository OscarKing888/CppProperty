#pragma once
#include "CoreConfig.h"
//----------------------------------------------------------------------------------------------
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cstdarg>
#include <cmath>

// STL containers
#include <vector>
#include <map>
#include <string>
#include <set>
#include <list>
#include <deque>
#include <queue>
#include <bitset>

// STL algorithms & functions
#include <algorithm>
#include <functional>
#include <limits>

// C++ Stream stuff
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>

#include <assert.h>

extern "C"
{
#   include <sys/types.h>
#   include <sys/stat.h>
}
//----------------------------------------------------------------------------------------------
#include "CoreExport.h"
#include <stack>


//------------------------------------------------------------------------
// Data types define
//------------------------------------------------------------------------

#ifndef byte
typedef unsigned char byte;
#endif

#ifndef uint64
typedef unsigned long long uint64;
#endif

#ifndef uint32
typedef unsigned int uint32;
#endif

#ifndef int32
typedef int int32;
#endif


#ifndef uint16
typedef unsigned short int uint16;
#endif

#ifndef int16
typedef short int int16;
#endif


typedef std::vector<byte> ByteBuffer;

#ifdef _DEBUG

struct _checkTypeSize
{
	_checkTypeSize()
	{
		assert(sizeof(byte) == 1);
		assert(sizeof(int16) == 2);
		assert(sizeof(uint16) == 2);
		assert(sizeof(int32) == 4);
		assert(sizeof(uint32) == 4);
		assert(sizeof(uint64) == 8);
	}
};

static _checkTypeSize g_checkTypeSize;

#endif


typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;

typedef std::string _StringBase;
typedef _StringBase String;


#include "TString.h"
//#include "DebugUtil.h"
#include "ByteStream.h"
#include "SingletonMyers.h"

