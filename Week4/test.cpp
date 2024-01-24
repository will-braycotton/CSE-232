#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::to_string;


int rev_num(int num) {
  string rev = "";
  string str = to_string(num);
  for (int i = str.size() - 1; i >= 0; --i) {
    rev += str[i];
  }
  return stol(rev);
}


int main(){
    string line;
    //getline(cin, line);
    int word_count = 0, first_letter_index = 0; 
    string word;
    while ( cin >> line){
    for (string::size_type i=0; i < line.length(); i++){ 
        char C = line[i];
        if (line.length() == 1){
            cout << line;
            word_count++;
        }
        else if (i == line.length()-1){
            word = line.substr(first_letter_index + 1 , i - first_letter_index-1);
            reverse(word.begin(), word.end());
            cout << line[first_letter_index] << word << line[i];
            word_count++;
        }
        
    }
    if ( word_count == 10){
            cout << endl;
            word_count= 0;
        }
    else{
        cout << ' ';
    }
    }
}