#pragma once
#include <string>
#include "Date.h"

using std::string;
using std::to_string;

class Page 
{
	static unsigned int NPage;

	string Title;
	string Text;

	Date DateCreation;
	Date DateWrite;

	//c in first word of name of varriable is constant varriable
	unsigned int cNumPage;
public:
	Page() {
		cNumPage = NPage;
		DateCreation.Now();
		DateWrite.Now();
		NPage++;
	}

	void writeTitle(string title) {
		Title = title;
	}
	void writeText(string text) {
		Text = text;
	}
	template<typename T>
	void writeAdditionalText(T what) {
		Text += to_string(what);
	}

	string readTitle() {
		return Title;
	}
	string readText() {
		return Text;
	}
	unsigned int CountPages() {
		return NPage;
	}
	unsigned int NumPage() {
		return cNumPage;
	}
	int DateCreated(string what) {
		Date& DT = DateCreation;

		if ("seconds" == what) { return DT.Seconds(); }
		else if ("minutes" == what) { return DT.Minutes(); }
		else if ("hours" == what) { return DT.Hours(); }
		else if ("month days" == what) { return DT.MonthDay(); }
		else if ("months" == what) { return DT.Month(); }
		else if ("years" == what) { return DT.Year(); }
		else if ("week days" == what) { return DT.WeekDay(); }
		else if ("year days" == what) { return DT.YearDay(); }
		else if ("day ligth hours" == what) { return DT.DayLightHours(); }
	}

	int DateWrited(string what) {
		Date& DT = DateWrite;

		if ("seconds") { return DT.Seconds(); }
		else if ("minutes" == what) { return DT.Minutes(); }
		else if ("hours" == what) { return DT.Hours(); }
		else if ("month days" == what) { return DT.MonthDay(); }
		else if ("months" == what) { return DT.Month(); }
		else if ("years" == what) { return DT.Year(); }
		else if ("week days" == what) { return DT.WeekDay(); }
		else if ("year days" == what) { return DT.YearDay(); }
		else if ("day ligth hours" == what) { return DT.DayLightHours(); }
	}

	void DateWrited(string what,int wha) {
		Date& DT = DateWrite;

		if ("seconds" == what) { DT.Seconds(wha); }
		else if ("minutes" == what) { DT.Minutes(wha); }
		else if ("hours" == what) { DT.Hours(wha); }
		else if ("month days" == what) { DT.MonthDay(wha); }
		else if ("months" == what) { DT.Month(wha); }
		else if ("years" == what) { DT.Year(wha); }
		else if ("week days" == what) { DT.WeekDay(wha); }
		else if ("year days" == what) { DT.YearDay(wha); }
		else if ("day ligth hours" == what) { DT.DayLightHours(wha); }
	}

	~Page() {
		NPage--;
	}
};

