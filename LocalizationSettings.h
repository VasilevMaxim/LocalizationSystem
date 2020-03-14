#pragma once
#include "Language.h"
#include <string>

using std::string;

class LocalizationSettings
{
public:
	static void SetLanguage(Language language);
	static Language GetLanguage();

	static string GetNameLanguage();
	static string GetNameLanguageDefult();

private:
	static Language _language;
};

