#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
#include "nepcal.h"
#include "nepali_calender.h"

DateStruct2 Test(){
	DateStruct2 ds;
	ds.day = 2;
	ds.dd = 22;
	ds.mm = 12;
	ds.yy = 2005;
	return ds;
};
//--------------------------------------------//
int CToNepali(int mm, int dd, int yy){
	Nepali_Calender nc;
	DateStruct ds;
	ds = nc.cnvToNepali(mm,dd,yy);
	printf("Month: %d\n",ds.mm );
	printf("Date : %d\n",ds.dd );
	printf("Year : %d\n",ds.yy );
	printf("day : %d\n",ds.day  );
	printf("wmonth : %s\n",ds.wmonth );
	printf("wday : %s\n",ds.wday  );
	printf("size : %d\n",sizeof(ds));

	
	FILE *fid;
	fid = fopen("d:\\_caNepCal.tmp","wb");
	fprintf(fid,"Temp File Used by caNepCalendar.\n");
	fprintf(fid,"%d\n",ds.mm );
	fprintf(fid,"%d\n",ds.dd );
	fprintf(fid,"%d\n",ds.yy );
	fprintf(fid,"%d\n",ds.day );
	fprintf(fid,"%s\n",ds.wday  );
	fprintf(fid,"%s",ds.wmonth );
	fclose(fid);

	return 1;
}
//--------------------------------------------//
int CToEnglish(int mm, int dd, int yy){
	Nepali_Calender nc;
	DateStruct ds;
	ds = nc.cnvToEnglish(mm ,dd ,yy );
	printf("Month: %d\n",ds.mm );
	printf("Date : %d\n",ds.dd );
	printf("Year : %d\n",ds.yy );
	return 1;
}