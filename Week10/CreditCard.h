#pragma once
#include <string>

// Nothing in this file can be changed

class CreditCard {
 private:
  std::string number;
 public:
  CreditCard(std::string const &);
  std::string Type();
};