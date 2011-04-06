#ifndef _Nepali_Calender_H
#define _Nepali_Calender_H

struct DateStruct{
		int yy;
	 	int mm;
	 	int dd;
	 	int day;
	 	char wmonth[20];
	 	char wday[20];
};

struct DateStruct2{
		int yy;
	 	int mm;
	 	int dd;
	 	int day;
};

//-------------------------------------
class Nepali_Calender{
private:      
	//properties
	static int BS[91][13];				//nepali month data
	static int month[12];				//non leap year
	static int lmonth[12];				//leap year
public: 	 
	//methods...
	int isLeapYear(int);
	DateStruct cnvToNepali(int, int , int);
	DateStruct cnvToEnglish(int, int, int);
	int what();
	int err(int errno, char * desc);
};

#endif