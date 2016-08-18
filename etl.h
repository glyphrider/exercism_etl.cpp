// vim: ts=4:nu
//
#ifndef __etl_h__
#define __etl_h__

#include <map>
#include <vector>

namespace etl
{
	const std::map<char,int> transform(const std::map<int,std::vector<char>>&);
}

#endif
