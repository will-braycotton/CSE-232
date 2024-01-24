#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    char C;
    char current_letter = ' ';
    char prior_letter = ' ';

    while (cin >> C){
        
        char after_letter = C;

        if ((current_letter == 'a') || (current_letter == 'e') || (current_letter == 'i') 
            || (current_letter == 'o') || (current_letter == 'u') || (current_letter == 'y') ||
            (current_letter == 'A') || (current_letter == 'E') || (current_letter == 'I') 
            || (current_letter == 'O') || (current_letter == 'U') || (current_letter == 'Y')){
                cout << prior_letter << current_letter << after_letter << endl;
            }


        prior_letter = current_letter ;
        current_letter = after_letter;

    }
}