#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main(){
    int x=0,length_count=1;
    string word;
    getline(cin, word);
    while ( x == 0 ){
        int character_count=0;
        char C = 0;
        for ( std::string::size_type i=0; i < word.length(); i++){
            if ((word[i] == word[i-1]) || (i==0)){
                character_count++;
            }
            else {
                character_count= 1;
            }
            if (character_count == length_count){
                C = word[i];
                break;
            }
        
        }
        if (character_count == length_count){
            cout << "'" << C << "'" << " is the first to length " << character_count <<endl;
            length_count++;
        }
        else{
            x++;
        }   
}
}