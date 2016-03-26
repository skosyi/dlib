// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the DLIB64_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// DLIB64_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DLIB64_EXPORTS
#define DLIB64_API __declspec(dllexport)
#else
#define DLIB64_API __declspec(dllimport)
#endif

// This class is exported from the dlib64.dll
class DLIB64_API Cdlib64 {
public:
	Cdlib64(void);
	// TODO: add your methods here.
};

extern DLIB64_API int ndlib64;

DLIB64_API int fndlib64(void);
