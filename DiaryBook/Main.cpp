#include <iostream>
#include "Page.h"
#include "Saver.h"
#include <Windows.h>

using std::wcout;
using std::wcin;
using std::getline;
using std::wstring;
using std::to_wstring;

wstring INPUTT;
unsigned int Page::NPage = 0;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Page page;

    wcout << "Title: ";
    getline(wcin, INPUTT);
    page.writeTitle(INPUTT);
    wcout << "Text: ";
    getline(wcin, INPUTT);
    page.writeText(INPUTT);

    page.DateWrited(L"hours", 3);

    wcout << '\n';
    wcout << page.readTitle() << ' ';
    wcout << '\n';
    wcout << page.readText();
    wcout << '\n';
    wcout << page.DateWrited(L"hours") << ':'
        << page.DateWrited(L"minutes") << ':'
        << page.DateWrited(L"seconds") << ' '
        << page.DateWrited(L"month days") << '.'
        << page.DateWrited(L"months")+1 << '.'
        << page.DateWrited(L"years");

    Saver saver;
    std::wstring title = L"Diary/";
    title += to_wstring(page.DateWrited(L"years")) + L'_';
    title += to_wstring(page.DateWrited(L"months")+1) + L'_';
    title += to_wstring(page.DateWrited(L"month days")) + L'_';
    title += to_wstring(page.DateWrited(L"hours")) + L'_';
    title += to_wstring(page.DateWrited(L"minutes")) + L'_';
    title += to_wstring(page.DateWrited(L"seconds"));
    
    saver.SaveHTML(page, title);
    system("pause");
    return 0;
}
