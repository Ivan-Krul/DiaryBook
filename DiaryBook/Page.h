#pragma once
#include <string>

using std::string;
using std::to_string;

class Page {
	static unsigned int NPage;
	string Title;
	string Text;
	//c in first word of name of varriable is constant varriable
	unsigned int cNumPage;
public:
	Page() {
		cNumPage = NPage;
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

	unsigned int NumPage() {
		return cNumPage;
	}

	~Page() {
		NPage--;
	}
};

