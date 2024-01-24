#include <vector>
#include <iostream>
#include "scrabble.h"
#include <string>

using std::vector;



int main (){
	vector <std::string> the_vector;
  std::string word = "A";
  the_vector.push_back(word);
  word = "K";
  the_vector.push_back(word);
  std::cout << ScrabbleWords(the_vector) << std::endl;
  }

