#include <iostream>
using std::endl;
using std::cout;
using std::cin;

#include <string>
using std::string;

int main(){
    string word;
    char C, before_letter, after_letter;
    while ( cin >> word){
    for (string::size_type i=0; i < word.length(); i++){
        C = word[i];
        before_letter = word[i-1];
        after_letter = word[i+1];
        if ( i == 0 ){
            if ( abs(C - after_letter ) < 2 ){
                cout << C;
            }
        }
        else if (i == word.length() - 1){
            if ( abs(C - before_letter ) < 2 ){
                cout << C;
            }
        }
        else{
            if ( (abs(C - after_letter ) < 2) ||  ( abs(C - before_letter ) < 2 ) ){
                cout << C;
            }
        }
    }
    cout << endl;
    }

}

