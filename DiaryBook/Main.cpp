#include <iostream>
#include "Page.h"
#include "Saver.h"

using std::wcout;
using std::wcin;
using std::getline;
using std::wstring;

wstring INPUT;
unsigned int Page::NPage = 0;

int main() {
    Page page;
    wcout << "Title: ";
    getline(wcin,INPUT);
    page.writeTitle(INPUT);
    wcout << "Text: ";
    getline(wcin, INPUT);
    page.writeText(INPUT);

    page.DateWrited(L"hours", 6);

    wcout << '\n';
    wcout << page.readTitle() << ' ' << page.NumPage();
    wcout << '\n';
    wcout << page.readText();
    wcout << '\n';
    wcout << page.DateWrited(L"hours") + 3 << ':' << page.DateWrited(L"minutes") << ':' << page.DateWrited(L"seconds") << ' ' << page.DateWrited(L"month days") << '.' << page.DateWrited(L"months") << '.' << page.DateWrited(L"years");

}
