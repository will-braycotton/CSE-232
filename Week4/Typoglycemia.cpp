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
        if (C == ' ' ){
            if (line[i-2] == ' '){ //checking stand alone characters
                //cout<< line[i-1] << ' ';
                cout << "yes" << ' ';
                word_count++;
                first_letter_index= i + 1;
            }
            else{
                word = line.substr(first_letter_index + 1 , i - first_letter_index - 2);
                reverse(word.begin(), word.end());
                cout << line[first_letter_index] << word << line[i-1] << ' ';
                //cout << i << ' ' << line[i-2] << 'x' <<endl;
                word_count++;
                first_letter_index= i + 1;
            }
        }
        if (i == line.length()-1){
            word = line.substr(first_letter_index + 1 , i - first_letter_index-1);
            reverse(word.begin(), word.end());
            cout << line[first_letter_index] << word << line[i] << ' ';
            cout << 'ues' << endl;
        }
        
    }
    if ( word_count == 10){
            cout << endl;
            word_count= 0;
        }
    }
}