// vim: ts=4:nu
//
#include "etl.h"

namespace etl
{
	const std::map<char,int> transform(const std::map<int,std::vector<char>>& legacy)
	{
		std::map<char,int> result;
		for(std::map<int,std::vector<char>>::const_iterator it = legacy.begin(); it != legacy.end(); it++)
		{
			for(vector<char>::const_iterator it2 = it->second().begin(); it2 != it.second().end(); it2++)
			{
				result[tolower(it->first())] = *it2;
			}
		}
		return result;
	}
}
