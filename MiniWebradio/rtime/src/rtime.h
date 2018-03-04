/*
 * RTC.h
 *
 *  Created on: 04.08.2017
 *      Author: Wolle
 */

#ifndef RTIME_H_
#define RTIME_H_

#include "WiFi.h"
#include "time.h"
#include "apps/sntp/sntp.h"

class RTIME{

public:
	RTIME();
	~RTIME();
	boolean begin();
	const char* gettime();
	const char* gettime_l();
	const char* gettime_s();
	const char* gettime_xs();
	uint8_t getweekday();
protected:
	boolean obtain_time();
private:
	struct tm timeinfo;
	time_t now;
	char strftime_buf[64];
	String w_day_l[7]={"Sonntag","Montag","Dienstag","Mittwoch","Donnerstag","Freitag","Samstag"};
	String w_day_s[7]={"So","Mo","Di","Mi","Do","Fr","Sa"};
	String month_l[12]={"Januar","Februar","M�rz","April","Mai","Juni","Juli","August","September","Oktober","November","Dezember"};
	String month_s[12]={"Jan","Feb","M�rz","Apr","Mai","Jun","Jul","Sep","Okt","Nov","Dez"};
};


#endif /* RTIME_H_ */
