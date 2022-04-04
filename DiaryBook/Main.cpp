#include <iostream>
#include "Page.h"

using std::cout;
using std::cin;
using std::getline;
using std::string;

string INPUT;
unsigned int Page::NPage = 0;

int main()
{
    Page page;

    cout << "Title: ";
    getline(cin,INPUT);
    page.writeTitle(INPUT);

    cout << "Text: ";
    getline(cin, INPUT);
    page.writeText(INPUT);

    cout << '\n';
    cout << page.readTitle();
    cout << '\n';
    cout << page.readText();
    cout << '\n';
}
