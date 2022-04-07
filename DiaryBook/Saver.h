#pragma once
#include <fstream>
#include "Page.h"

using std::wofstream;
using std::wstring;
using std::getline;

class Saver {
public:
	void SaveHTML(Page page,wstring directive) {
		wofstream file;
		file.open(directive + L".html", std::ios::out);

		file << "<!DOCTYPE html><html><head><meta charset = \"utf-8\"><meta name = \"viewport\" content = \"width=device-width, initial-scale=1\"><title>\n";
		file << page.readTitle();
		file << "\n</title></head><body><h2>\n"
			<< page.NumPage() <<
			"\n</h2><h2>\n"
			<< page.readTitle() <<
			"\n</h2><p>\n"
			<< page.readText() <<
			"\n</p><p>\n"
			<< page.DateWrited(L"hours") + 3 << ':' << page.DateWrited(L"minutes") << ':' << page.DateWrited(L"seconds") << ' ' << page.DateWrited(L"month days") << '.' << page.DateWrited(L"months") + 1 << '.' << page.DateWrited(L"years") <<
			"\n</p></body> </html>\n";
	}
};

