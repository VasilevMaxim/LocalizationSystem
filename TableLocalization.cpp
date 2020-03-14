#include "TableLocalization.h"
#include <stdexcept>
#include "LocalizationSettings.h"

TableLocalization::TableLocalization(Table* table)
{
	for (int i = 1; i <= table->GetSizeRows(); i++)
	{	
		for (int j = 1; j <= table->GetSizeColumns(); j++)
		{
			try
			{
				_tableLocalization[make_pair(table->GetValue(i, 0), table->GetValue(0, j))] = table->GetValue(i, j);
			}
			catch (std::out_of_range e)
			{
				_tableLocalization[make_pair(table->GetValue(i, 0), table->GetValue(0, j))] = "";
			}
		}
	}
}

TableLocalization::TableLocalization(const string& pathFile) : TableLocalization(new Table(pathFile))
{

}
	
string TableLocalization::GetText(const string& key)
{
	try
	{
		return _tableLocalization.at(make_pair(key, LocalizationSettings::GetNameLanguage()));
	}
	catch (std::out_of_range e)
	{
		try
		{
			return _tableLocalization.at(make_pair(key, LocalizationSettings::GetNameLanguageDefult()));
		}
		catch (std::out_of_range e)
		{
			return "";
		}
	}
}
