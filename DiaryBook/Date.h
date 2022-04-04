#pragma once
#include <chrono>
#include <time.h>

class Date
{
	tm* DateTime;
public:
	Date() {
		Now();
	}

	void Now() {
		time_t now = time(0);
#pragma warning(suppress : 4996)
		DateTime = gmtime(&now);
	}

	void Seconds(int sec) { DateTime->tm_sec = sec; }
	void Minutes(int min) { DateTime->tm_min = min; }
	void Hours(int hou) { DateTime->tm_hour = hou; }
	void MonthDay(int mday) { DateTime->tm_mday = mday; }
	void Month(int mon) { DateTime->tm_mon = mon; }
	void Year(int year) { DateTime->tm_year = year; }
	void WeekDay(int wday) { DateTime->tm_wday = wday; }
	void YearDay(int yday) { DateTime->tm_yday = yday; }
	void DayLightHours(int dlh) { DateTime->tm_isdst = dlh; }

	int Seconds() { return DateTime->tm_sec; }
	int Minutes() { return DateTime->tm_min; }
	int Hours() { return DateTime->tm_hour;}
	int MonthDay() { return DateTime->tm_mday; }
	int Month() { return DateTime->tm_mon; }
	int Year() { return DateTime->tm_year + 1900; }
	int WeekDay() { return DateTime->tm_wday; }
	int YearDay() { return DateTime->tm_yday; }
	int DayLightHours() { return DateTime->tm_isdst; }

	~Date() {
	}
};

