#pragma once
#include <fstream>
#include <string>
#include "Page.h"

using std::wifstream;
using std::wstring;

class Loader {
	Page LoadHTML(wstring dir) {
		wifstream file;
		file.open(dir);

		Page page;



		return Page();
	}
};


