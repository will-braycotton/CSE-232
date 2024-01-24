#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;


int main(){
    string word,result;
    while (    getline( cin, word)){


    for (string::size_type i=0; i < word.length(); i++){
        if ((i ==0)&& (isalpha(word[0]))) {
            cout << word[0];
        }
        else if (isalpha(word[i])){
            if (isalpha(word[i-1])== 0){
                cout << word[i];
            }
        }
    }
    
    }
    cout << endl;
}