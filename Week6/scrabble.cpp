#include <vector>
#include <string>
#include <iostream>
#include "scrabble.h"


int ScrabbleLetterValue(const char & letter) {
  if (std::string("AEIOULNSTR").find(letter) != std::string::npos) {
    return 1;
  } else if (std::string("DG").find(letter) != std::string::npos) {
    return 2;
  } else if (std::string("BCMP").find(letter) != std::string::npos) {
    return 3;
  } else if (std::string("FHVWY").find(letter) != std::string::npos) {
    return 4;
  } else if (std::string("K").find(letter) != std::string::npos) {
    return 5;
  } else if (std::string("JX").find(letter) != std::string::npos) {
    return 8;
  } else if (std::string("QZ").find(letter) != std::string::npos) {
    return 10;
  }
  return 0;
}

int ScrabbleWords(const std::vector<std::string> & words) {
  int tally;
  for (const std::string & word : words) {
    int size = word.size();
    for ( int i = 0; i <  size; i++) {
      char letter = word[i];
      tally += ScrabbleLetterValue(letter);
    }
  }
  return tally;
}