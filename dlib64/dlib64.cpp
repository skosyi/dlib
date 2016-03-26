// dlib64.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "dlib64.h"


// This is an example of an exported variable
DLIB64_API int ndlib64=0;

// This is an example of an exported function.
DLIB64_API int fndlib64(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see dlib64.h for the class definition
Cdlib64::Cdlib64()
{
	return;
}
