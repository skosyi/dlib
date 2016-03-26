// dlib64_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "../dlib64/Launcher.h"

//int _tmain(int argc, _TCHAR* argv[])
int main(int argc, char** argv)
{
	CLauncher launcher;
	launcher.test(argc, argv);

	return 0;
}

