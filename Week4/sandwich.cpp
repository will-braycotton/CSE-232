#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

char * Sandwich(std::string & line, char * bread_ptr) {
    char before, after;
    for (string::size_type i=0; i < line.length(); i++){ 
        //C = line[i];
        before = line[i-1];
        after = line[i+1];
        if ((i ==0 ) || (i == line.length()-1 )){

        }
        else{
            if ( (before == after) && (before == *bread_ptr)){
                char *result_ptr = &line[i];
                return result_ptr;
                
            }
        }
    }
    char *result_ptr = nullptr;
    return result_ptr; 
        
}


int main() {
	std::string line = "Char is a character";
	char bread = 'a';
	char * filling_ptr = Sandwich(line, &bread);
	std::cout << *filling_ptr << std::endl; // Should be r
}
