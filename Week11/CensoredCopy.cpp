#include "CensoredCopy.hpp"
#include <vector>
#include <ostream>
#include <istream>
#include <sstream>
#include <set>
#include <map>
#include <string>
#include <iostream>
#include <algorithm>
using std::string; using std::istringstream; using std::set; using std::ostream; using std::map;
using std::endl; using std::cout;

set<string> ReplacementCensor( istream &iss, ostream &out, map<string, string> map ){
    set<string> result;
    string str;
    while (getline(iss,str)){
    iss >> str;
    }
    for (  auto  &x : map){
        string lower_case;
        transform(str.begin(),str.end(), back_inserter(lower_case), ::tolower );
        string word;
        transform(x.first.begin(), x.first.end(), back_inserter(word), ::tolower);
        int index=0;
        while ( index > -1){
        string lower_case;
        transform(str.begin(),str.end(), back_inserter(lower_case), ::tolower );
        index = lower_case.find(word, index + 1);
        if ( index > -1 ){
            int size_of_word= x.first.size();
            string replaced_word;
            copy(str.begin()+index, str.begin()+index+size_of_word, std::back_inserter(replaced_word));
            result.insert(replaced_word);


            string before_str="";
            copy(str.begin(), str.begin()+index, std::back_inserter(before_str));
            string after_str="";
            copy(str.begin() + index + size_of_word, str.end(),std::back_inserter(after_str));
            str = before_str + x.second + after_str;


        }
        }
    }
    out << str;
    return result;
}


int main(){
   
    std::map<std::string, std::string> bad_to_gooda = {{"q", "b"}, {"c", "sea"}, {"z", "sea"}};
  std::istringstream issa("alphabet and cats quickly");
  std::ostringstream ossa;
  std::set<std::string> resulta = ReplacementCensor(issa, ossa, bad_to_gooda);
  std::set<std::string> expected_returna = {"c", "q"};
  if (resulta == expected_returna){
    cout << "true" << endl;
  }
  if (ossa.str() == "alphabet and seaats buiseakly"){
    cout << "true" << endl;
  }

  std::map<std::string, std::string> bad_to_good = {{"q", "b"}, {"c", "sea"}, {"z", "sea"}};
  std::istringstream iss("alphabet and cats");
  std::ostringstream oss;
  std::set<std::string> result = ReplacementCensor(std::cin, std::cout, bad_to_good);
  std::set<std::string> expected_return = 	{"c", "q"};
  if(result == expected_return){
    cout << "true";
  }
}
