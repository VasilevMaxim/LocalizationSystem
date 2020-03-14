#include "LocalizationSettings.h"

void LocalizationSettings::SetLanguage(Language language)
{
	_language = language;
}

Language LocalizationSettings::GetLanguage()
{
	return _language;
}

string LocalizationSettings::GetNameLanguage()
{
	switch (GetLanguage())
	{
	case Language::English:
		return "English";
	case Language::Russian:
		return "Russian";
	case Language::German:
		return "German";
	case Language::French:
		return "French";
	case Language::Portuguese:
		return "Portuguese";
	case Language::Spanish:
		return "Spanish";
	case Language::Italian:
		return "Italian";
	case Language::Romanian:
		return "Romanian";
	case Language::Turkish:
		return "Turkish";
	case Language::Polish:
		return "Polish";
	case Language::Czech:
		return "Czech";
	case Language::Korean:
		return "Korean";
	case Language::Chinese:
		return "Chinese";
	default:
		return "English";
		break;
	}
}

string LocalizationSettings::GetNameLanguageDefult()
{
	return "English";
}
