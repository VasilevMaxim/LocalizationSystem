#pragma once
#include "Table/Table.h"

class TableLocalization
{
public:
	TableLocalization(Table* table);
	TableLocalization(const string& pathFile);

	string GetText(const string& key);

private:
	map<pair<string, string>, string> _tableLocalization;
};

