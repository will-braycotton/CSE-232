#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <iostream>
#include <ostream>
#include <sstream>
using std::vector;
using std::cout; using std::endl;
using std::string;


void SortByUppercase( vector<string> &s){
    vector<string> upper;
    string list_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    stable_sort(s.begin(),s.end(), [] (string s1, string s2) {
        string uppercase_1= "";
        string uppercase_2= "";
        copy_if(s1.begin(), s1.end(), std::back_inserter(uppercase_1), [] (char c) {return (isupper(c));});
        copy_if(s2.begin(), s2.end(), std::back_inserter(uppercase_2), [] (char c) {return (isupper(c));});

    return (uppercase_1 < uppercase_2);
    
    });

  
}

int SumOfOdd( vector<int>::const_iterator first, std::vector<int>::const_iterator last){
    int result;
    vector<int> odd;
    copy_if( first, last, std::back_inserter(odd), [] (int i){return i%2!=0;});
    result = accumulate(odd.begin(), odd.end(), 0);


return result;
}

string DoubleToPercentString( vector<double> const v){
    string result;
    std::stringstream s;
    vector<double> percent;
    transform(v.begin(), v.end(), std::back_inserter(percent), [] (double i) {return int (i *100);});
    copy(percent.begin(), percent.end(), std::ostream_iterator<double>(s, "% "));
    result = s.str();
return result;
}

int main(){
    
std::vector<std::string> words = {"wolf", "BanAna", "caRRot", "AprIcots", "BEets", "chiCkPeas", "orAngEs", "apple", "CAT", "dOG"};
SortByUppercase(words);
}