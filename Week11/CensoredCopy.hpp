#pragma once
#include <vector>
#include <ostream>
#include <istream>
#include <set>
#include <map>
#include <string>
using std::string; using std::istream; using std::set; using std::ostream; using std::map;

set<string> ReplacementCensor( istream &iss, ostream &out, map<string, string> map );