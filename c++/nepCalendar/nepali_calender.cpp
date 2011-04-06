#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <string.h>
#include "nepali_calender.h"

//--------------------------------------------//
//init properties...
int Nepali_Calender::BS[91][13]={
		2000,30,32,31,32,31,30,30,30,29,30,29,31 ,
		2001,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2002,31,31,32,32,31,30,30,29,30,29,30,30 ,
		2003,31,32,31,32,31,30,30,30,29,29,30,31 ,
		2004,30,32,31,32,31,30,30,30,29,30,29,31 ,
		2005,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2006,31,31,32,32,31,30,30,29,30,29,30,30 ,
		2007,31,32,31,32,31,30,30,30,29,29,30,31 ,
		2008,31,31,31,32,31,31,29,30,30,29,29,31 ,
		2009,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2010,31,31,32,32,31,30,30,29,30,29,30,30 ,
		2011,31,32,31,32,31,30,30,30,29,29,30,31 ,
		2012,31,31,31,32,31,31,29,30,30,29,30,30 ,
		2013,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2014,31,31,32,32,31,30,30,29,30,29,30,30 ,
		2015,31,32,31,32,31,30,30,30,29,29,30,31 ,
		2016,31,31,31,32,31,31,29,30,30,29,30,30 ,
		2017,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2018,31,32,31,32,31,30,30,29,30,29,30,30 ,
		2019,31,32,31,32,31,30,30,30,29,30,29,31 ,
		2020,31,31,31,32,31,31,30,29,30,29,30,30 ,
		2021,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2022,31,32,31,32,31,30,30,30,29,29,30,30 ,
		2023,31,32,31,32,31,30,30,30,29,30,29,31 ,
		2024,31,31,31,32,31,31,30,29,30,29,30,30 ,
		2025,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2026,31,32,31,32,31,30,30,30,29,29,30,31 ,
		2027,30,32,31,32,31,30,30,30,29,30,29,31 ,
		2028,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2029,31,31,32,31,32,30,30,29,30,29,30,30 ,
		2030,31,32,31,32,31,30,30,30,29,29,30,31 ,
		2031,30,32,31,32,31,30,30,30,29,30,29,31 ,
		2032,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2033,31,31,32,32,31,30,30,29,30,29,30,30 ,
		2034,31,32,31,32,31,30,30,30,29,29,30,31 ,
		2035,30,32,31,32,31,31,29,30,30,29,29,31 ,
		2036,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2037,31,31,32,32,31,30,30,29,30,29,30,30 ,
		2038,31,32,31,32,31,30,30,30,29,29,30,31 ,
		2039,31,31,31,32,31,31,29,30,30,29,30,30 ,
		2040,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2041,31,31,32,32,31,30,30,29,30,29,30,30 ,
		2042,31,32,31,32,31,30,30,30,29,29,30,31 ,
		2043,31,31,31,32,31,31,29,30,30,29,30,30 ,
		2044,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2045,31,32,31,32,31,30,30,29,30,29,30,30 ,
		2046,31,32,31,32,31,30,30,30,29,29,30,31 ,
		2047,31,31,31,32,31,31,30,29,30,29,30,30 ,
		2048,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2049,31,32,31,32,31,30,30,30,29,29,30,30 ,
		2050,31,32,31,32,31,30,30,30,29,30,29,31 ,
		2051,31,31,31,32,31,31,30,29,30,29,30,30 ,
		2052,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2053,31,32,31,32,31,30,30,30,29,29,30,30 ,
		2054,31,32,31,32,31,30,30,30,29,30,29,31 ,
		2055,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2056,31,31,32,31,32,30,30,29,30,29,30,30 ,
		2057,31,32,31,32,31,30,30,30,29,29,30,31 ,
		2058,30,32,31,32,31,30,30,30,29,30,29,31 ,
		2059,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2060,31,31,32,32,31,30,30,29,30,29,30,30 ,
		2061,31,32,31,32,31,30,30,30,29,29,30,31 ,
	    2062,30,32,31,32,31,31,29,30,29,30,29,31 ,
		2063,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2064,31,31,32,32,31,30,30,29,30,29,30,30 ,
		2065,31,32,31,32,31,30,30,30,29,29,30,31 ,
		2066,31,31,31,32,31,31,29,30,30,29,29,31 ,
		2067,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2068,31,31,32,32,31,30,30,29,30,29,30,30 ,
		2069,31,32,31,32,31,30,30,30,29,29,30,31 ,
		2070,31,31,31,32,31,31,29,30,30,29,30,30 ,
		2071,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2072,31,32,31,32,31,30,30,29,30,29,30,30 ,
		2073,31,32,31,32,31,30,30,30,29,29,30,31 ,
		2074,31,31,31,32,31,31,30,29,30,29,30,30 ,
		2075,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2076,31,32,31,32,31,30,30,30,29,29,30,30 ,
		2077,31,32,31,32,31,30,30,30,29,30,29,31 ,
		2078,31,31,31,32,31,31,30,29,30,29,30,30 ,
		2079,31,31,32,31,31,31,30,29,30,29,30,30 ,
		2080,31,32,31,32,31,30,30,30,29,29,30,30 ,
		2081, 31, 31, 32, 32, 31, 30, 30, 30, 29, 30, 30, 30 ,
		2082, 30, 32, 31, 32, 31, 30, 30, 30, 29, 30, 30, 30 ,
		2083, 31, 31, 32, 31, 31, 30, 30, 30, 29, 30, 30, 30 ,
		2084, 31, 31, 32, 31, 31, 30, 30, 30, 29, 30, 30, 30 ,
		2085, 31, 32, 31, 32, 30, 31, 30, 30, 29, 30, 30, 30 ,
		2086, 30, 32, 31, 32, 31, 30, 30, 30, 29, 30, 30, 30 ,
		2087, 31, 31, 32, 31, 31, 31, 30, 30, 29, 30, 30, 30 ,
		2088, 30, 31, 32, 32, 30, 31, 30, 30, 29, 30, 30, 30 ,
		2089, 30, 32, 31, 32, 31, 30, 30, 30, 29, 30, 30, 30 ,
		2090, 30, 32, 31, 32, 31, 30, 30, 30, 29, 30, 30, 30
};
int Nepali_Calender::month[12]={	//non leap year
	31,28,31,30,31,30,31,31,30,31,30,31
};
int Nepali_Calender::lmonth[12]={	//leap year
	31,29,31,30,31,30,31,31,30,31,30,31
};

//--------------------------------------------//
//check the leap year...
int Nepali_Calender::isLeapYear(int year){
		int a =  year;
		if ( a%100==0){
		 if( a%400==0)
			return 1;
		 else
			return 0;
		}
		else{
			if ( a%4==0)
				return 1;
		   else
				return 0;
		}
};
//-------------------------------------------//
//convert english date to nepali
DateStruct Nepali_Calender::cnvToNepali(int mm, int dd, int yy){

	DateStruct ndate;
						//initial checks and all...
	if( yy<1944 ||  yy>2033){
		err(1,"Supported only between 1944-2033");
		ndate.yy = 0;
		return ndate;
	}
	if( mm<1 ||  mm >12){
		err(2,"Error in month value 1-12, Are you looking for jupiter's calender?");
		ndate.yy = 0;
		return ndate;
	}
	if( dd<1 ||  dd >31){
		err(3,"Error in day value");
		ndate.yy = 0;
		return ndate;
	}

	if( this->isLeapYear( yy)==1)
		if(dd > lmonth[mm-1]){
			char buff[200];
			sprintf(buff,"This month only contains %d days ",lmonth[mm-1]);
			err(4,buff);
			ndate.yy = 0;
			return ndate;
		}
	else
		if(dd > month[mm-1]){
			char buff[200];
			sprintf(buff,"This month only contains %d days ",month[mm-1]);
			err(4,buff);
			ndate.yy = 0;
			return ndate;
		}

 			/**currently can only calculate the date between AD 1955-2022...**/
	 int def_eyy = 1944;									//spear head english date...
	 int def_nyy = 2000,  def_nmm = 9,  def_ndd = 17-1;		//spear head nepali date...
	 int total_eDays=0,  total_nDays=0,  a=0,  day=7-1;		//all the initializations...
	 int m = 0,  y = 0, i,j;
	 int numDay=0;

	for( i=0;  i<( yy- def_eyy);  i++){	//total days for month calculation...(english)
		if( this->isLeapYear( def_eyy+ i)==1)
			for( j=0;  j<12;  j++)
				 total_eDays +=  this->lmonth[j];
		else
			for( j=0;  j<12;  j++)
				 total_eDays +=  this->month[j];
	}
	 total_eDays +=  dd;
		//the final years month calculation...(english)
	for( i=0;  i<( mm-1);  i++){
		if( this->isLeapYear( yy)==1)
			 total_eDays +=  lmonth[i];
		else
			 total_eDays +=  month[i];
	}
	//printf("The grand English Days Total = %d\n", total_eDays);

	 i = 0;  j =  def_nmm;		//to access the array data
	 total_nDays =  def_ndd;
	 m =  def_nmm;
	 y =  def_nyy;
	while( total_eDays != 0){
         a =  this->BS[ i][ j];
		 total_nDays++;						//count the days
		 day++;								//count the days interms of 7 days
		if( total_nDays >  a){
			 m++;
			 total_nDays=1;
			 j++;
		}
		if( day > 7)
			 day = 1;
		if( m > 12){
			 y++;
			 m = 1;
		}
	    if( j > 12){
			 j = 1;  i++;
		}
		 total_eDays--;
	}

	char *wday;
	switch(day){
		case 1:
		 wday = "Sunday";
		break;
		case 2:
		 wday = "Monday";
		break;
		case 3:
		 wday = "Tuesday";
		break;
		case 4:
		 wday = "Wednesday";
		break;
		case 5:
		 wday = "Thursday";
		break;
		case 6:
		 wday = "Friday";
		break;
		case 7:
		 wday = "Saturday";
	}
	char *wmonth;
	switch(m){
		case 1:
		 wmonth = "Baishak";
		break;
		case 2:
		 wmonth = "Jestha";
		break;
		case 3:
		 wmonth = "Ashad";
		break;
		case 4:
		 wmonth = "Shrawan";
		break;
		case 5:
		 wmonth = "Bhadra";
		break;
		case 6:
		 wmonth = "Ashwin";
		break;
		case 7:
		 wmonth = "Kartik";
		case 8:
		 wmonth = "Mangshir";
		break;
		case 9:
		 wmonth = "Poush";
		break;
		case 10:
		 wmonth = "Magh";
		break;
		case 11:
		 wmonth = "Falgun";
		break;
		case 12:
		 wmonth = "Chaitra";
	}

	 ndate.yy = y;
	 ndate.mm = m;
	 ndate.dd = total_nDays;
	 ndate.day = day;
	 strcpy( ndate.wmonth,wmonth);
	 strcpy(ndate.wday, wday);
	 return ndate;
};

//-----------------------------------------------//
//convert nepali date to english
DateStruct Nepali_Calender::cnvToEnglish(int mm,int dd,int yy){
	DateStruct edate;

	if( yy<2000 ||  yy>2089){
		err(1,"Supported only nepali year between 2000-2089");
		edate.yy = 0;
		return edate;
	}
	if( mm<1 ||  mm >12){
		err(2,"Error in month value 1-12, Are you looking for jupiter's calender?");
		edate.yy = 0;
		return edate;
	}
	if( dd<1 ||  dd >32){
		err(3,"Error in day value");
		edate.yy = 0;
		return edate;
	}
	if(dd>this->BS[(yy%1000)][mm]){
		char buff[200];
		sprintf(buff,"This month contains only %d days",this->BS[(yy%1000)][mm]);
		err(4,buff);
		edate.yy = 0;
		return edate;
	}

	int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};	//non leap year
	int lmonth[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};	//leap year

	/**currently can only calculate the date between BS 2013-2079...**/
	 int def_eyy = 1943, def_emm=4 ,  def_edd=14-1;			//spear head english date...
	 int def_nyy = 2000,  def_nmm = 1,  def_ndd = 1;		//spear head nepali date...
	 unsigned int  total_eDays=0,  total_nDays=0,  a=0,  day=4-1;		//all the initializations...
	 int m = 0,  y = 0,  i=0,j=0;
	 int k = 0;		//to access the array data
	 int numDay = 0;
	for( i=0;  i<( yy- def_nyy);  i++){	//total days calculation...(nepali)
		for( j=1;  j<=12;  j++){
			 total_nDays +=  this->BS[ k][ j];
		}
		 k++;
	}
			//final year's month calculation...(nepali)
	for( j=1;  j< mm;  j++){
		 total_nDays +=  this->BS[ k][ j];
	}

	 total_nDays +=  dd;
	//printf("The grand Days Total = %d\n<br>", total_nDays);
			//calculation of equivalent english date...
	 total_eDays =  def_edd;
	 m =  def_emm;
	 y =  def_eyy;
	while( total_nDays != 0){
		if( this->isLeapYear( y)==1)
			 a =  lmonth[ m];
		else
			 a =  month[ m];

		 total_eDays++;
		 day++;
		if( total_eDays >  a){
			 m++;
			 total_eDays = 1;
			if( m > 12){
				 y++;
				 m = 1;
			}
		}
		if( day > 7)
			 day = 1;
		 total_nDays--;
	}
	 numDay =  day;
	char *wday;
	switch( day){
		case 1:
		 wday = "Sunday";
		break;
		case 2:
		 wday = "Monday";
		break;
		case 3:
		 wday = "Tuesday";
		break;
		case 4:
		 wday = "Wednesday";
		break;
		case 5:
		 wday = "Thursday";
		break;
		case 6:
		 wday = "Friday";
		break;
		case 7:
		 wday = "Saturday";
	}
	char *wmonth;
	switch( m){
		case 1:
			 wmonth = "January";
			break;
		case 2:
			 wmonth = "February";
			break;
		case 3:
			 wmonth = "March";
			break;
		case 4:
			 wmonth = "April";
			break;
		case 5:
			 wmonth = "May";
			break;
		case 6:
			 wmonth = "June";
			break;
		case 7:
			 wmonth = "July";
			break;
		case 8:
			 wmonth = "August";
			break;
		case 9:
			 wmonth = "September";
			break;
		case 10:
			 wmonth = "October";
			break;
		case 11:
			 wmonth = "November";
			break;
		case 12:
			 wmonth = "December";
	}

	 edate.yy =  y;							//num
	 edate.mm =  m;							//num
	 edate.dd =  total_eDays;				//num
	 strcpy(edate.wday, wday);					//alphabet base date eg sunday, monday, tuesday....
	 strcpy(edate.wmonth, wmonth);  				//alphabet month
	 edate.day =  numDay;					//num base of sun - 1, mon - 2
	return  edate;

};

//---------------------------------------//
int Nepali_Calender::err(int errno, char * desc){
	printf("errno : %d\n desc: %s",errno, desc);
	return errno;
};
