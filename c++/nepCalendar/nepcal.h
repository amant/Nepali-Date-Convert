#include "nepali_calender.h"
#ifndef _nepcal_h
#define _nepcal_h

extern "C"{
	int CToNepali(int mm, int dd, int yy);
	int CToEnglish(int mm, int dd, int yy);

	DateStruct2 Test();
}

#endif