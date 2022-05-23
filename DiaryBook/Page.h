#pragma once
#include <string>
#include "Date.h"

using std::wstring;
using std::to_wstring;

class Page 
{
	typedef unsigned int npage_v;
	typedef wstring title_v;
	typedef wstring text_v;

	static npage_v NPage;

	title_v Title;
	text_v Text;

	Date DateWrite;

	//c in first word of name of varriable is constant varriable
	npage_v cNumPage;
public:
	Page() {
		cNumPage = NPage;
		DateWrite.Now();
		NPage++;
	}

	void writeTitle(title_v title) {
		Title = title;
	}
	void writeText(text_v text) {
		Text = text;
	}
	template<typename T>
	void writeAdditionalText(T what) {
		Text += to_string(what);
	}
	void writeAdditionalText(text_v text) {
		Text += text;
	}

	title_v readTitle() {
		return Title;
	}
	text_v readText() {
		return Text;
	}
	npage_v CountPages() {
		return NPage;
	}
	npage_v NumPage() {
		return cNumPage;
	}

	int DateWrited(wstring what) {
		if (L"seconds" == what) { return DateWrite.Seconds(); }
		else if (L"minutes" == what) { return DateWrite.Minutes(); }
		else if (L"hours" == what) { return DateWrite.Hours(); }
		else if (L"month days" == what) { return DateWrite.MonthDay(); }
		else if (L"months" == what) { return DateWrite.Month(); }
		else if (L"years" == what) { return DateWrite.Year(); }
		else if (L"week days" == what) { return DateWrite.WeekDay(); }
		else if (L"year days" == what) { return DateWrite.YearDay(); }
		else if (L"day ligth hours" == what) { return DateWrite.DayLightHours(); }
	}

	void DateWrited(wstring what,int wha) {
		if (L"seconds" == what)
			DateWrite.Seconds(wha);
		else if (L"minutes" == what)
			DateWrite.Minutes(wha);
		else if (L"hours" == what)
			DateWrite.Hours(wha);
		else if (L"month days" == what)
			DateWrite.MonthDay(wha);
		else if (L"months" == what)
			DateWrite.Month(wha);
		else if (L"years" == what)
			DateWrite.Year(wha);
		else if (L"week days" == what) 
			DateWrite.WeekDay(wha);
		else if (L"year days" == what)
			DateWrite.YearDay(wha);
		else if (L"day ligth hours" == what)
			DateWrite.DayLightHours(wha);
		else if (L"week" == what)
			DateWrite.Week();
	}

	~Page() {
		NPage--;
	}
};

