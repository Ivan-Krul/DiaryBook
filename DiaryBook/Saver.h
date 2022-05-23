#pragma once
#include <fstream>
#include "Page.h"

using std::wofstream;
using std::wstring;
using std::getline;
using std::wstring;

class Saver {
public:
	void SaveHTML(Page page,wstring directive) {
		wofstream file;
		file.open(directive + L".html");

		file << "<!DOCTYPE html><html><head><meta charset = \"utf-8\"><meta name = \"viewport\" content = \"width=device-width, initial-scale=1\"><title>\n";
		file << "Diary " << page.readTitle();
		file << "\n</title></head><body><h2>\n"
			<< page.NumPage() <<
			"\n</h2><h2>\n";
		for (int i = 0;i < page.readTitle().size();i++) {
			file << page.readTitle()[i];
			if (i % 32 == 0 && i != 0)
				file << '\n';
		}
		file << "\n</h2><p>\n";
		for (int i = 0;i < page.readText().size();i++) {
			file << page.readText()[i];
			if (i % 256 == 0 && i != 0)
				file << '\n';
		}
		file <<"\n</p><p>\n" << page.DateWrited(L"hours") + 3 << ':' << page.DateWrited(L"minutes") << ':' << page.DateWrited(L"seconds") << ' '<<page.DateWrited(L"week") << ' ' << page.DateWrited(L"month days") << '.' << page.DateWrited(L"months") + 1 << '.' << page.DateWrited(L"years") <<
			"\n</p></body> </html>\n";
	}
};
