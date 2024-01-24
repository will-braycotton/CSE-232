#include "Validator.h"
#include "CreditCard.h"
#include <iostream>
#include <string>
#include <vector>
using std::string;


bool Validator(){
    bool result = true;
    
    try {
    CreditCard cc("340653705597107"); // Correct 
    result &= true;
  } catch (std::invalid_argument & e) {
    result &= false;
  }try {
    CreditCard cc("5555555555554444"); // Correct MasterCard
    result &= true;
  } catch (std::invalid_argument & e) {
    result &= false;
  }try {
    CreditCard cc("30569309025904"); // Correct Diners
    result &= true;
  } catch (std::invalid_argument & e) {
    result &= false;
  }try {
    CreditCard cc("6011111111111117"); // Correct Discover
    result &= true;
  } catch (std::invalid_argument & e) {
    result &= false;
  }try {
    CreditCard cc("6011000990139424"); // Correct Discover
    result &= true;
  } catch (std::invalid_argument & e) {
    result &= false;
  }try {
    CreditCard cc("3530111333300000"); // Correct JCB
    result &= true;
  } catch (std::invalid_argument & e) {
    result &= false;
  }try {
    CreditCard cc("3566002020360505"); // Correct JCB
    result &= true;
  } catch (std::invalid_argument & e) {
    result &= false;
  }try {
    CreditCard cc("371449635398431"); // Correct AmEX
    result &= true;
  } catch (std::invalid_argument & e) {
    result &= false;
  }try {
    CreditCard cc("4012888888881881"); // Correct VISA
    result &= true;
  } catch (std::invalid_argument & e) {
    result &= false;
  }try {
    CreditCard cc("4111111111111111"); // Correct VISA
    result &= true;
  } catch (std::invalid_argument & e) {
    result &= false;
  }try {
    CreditCard cc("5105105105105100"); // Correct MasterCARds
    result &= true;
  } catch (std::invalid_argument & e) {
    result &= false;
  }try {
    CreditCard cc("30569309025904"); // Correct 
    result &= true;
  } catch (std::invalid_argument & e) {
    result &= false;
  }try {
    CreditCard cc2("34065370559710700"); // Improper Length Amex
    result &= false;
  } catch (std::invalid_argument & e) {
    result &= true;
  }try {
    CreditCard cc2("4624748233249080"); // Fails Luhn Validation
    result &= false;
  } catch (std::invalid_argument & e) {
    result &= true;
  }try {
    CreditCard cc2("41111111111111"); // Improper Length Visa
    result &= false;
  } catch (std::invalid_argument & e) {
    result &= true;
  }try {
    CreditCard cc2("549089786789455"); // Improper Length MasterCard
    result &= false;
  } catch (std::invalid_argument & e) {
    result &= true;
  }try {
    CreditCard cc2("2123786789876590"); // Improper Length JCB
    result &= false;
  } catch (std::invalid_argument & e) {
    result &= true;
  }try {
    CreditCard cc2("398765456789097"); // Improper Length JCB
    result &= false;
  } catch (std::invalid_argument & e) {
    result &= true;
  }try {
    CreditCard cc2("398765456789097"); // Improper Length JCB
    result &= false;
  } catch (std::invalid_argument & e) {
    result &= true;
  }
try {
    CreditCard cc2("601189789876545"); // Improper Length Discoer
    result &= false;
  } catch (std::invalid_argument & e) {
    result &= true;
  }
try {
    CreditCard cc2("3037898767898"); // Improper Length Diners
    result &= false;
  } catch (std::invalid_argument & e) {
    result &= true;
  }
try {
    CreditCard cc2("3689876789098764"); // Improper Length Diners
    result &= false;
  } catch (std::invalid_argument & e) {
    result &= true;
  }
try {
    CreditCard cc2(""); // empty string
    result &= false;
  } catch (std::invalid_argument & e) {
    result &= true;
  }
  try {
    CreditCard cc2("ajbfsjdfjsdfc"); // letter string
    result &= false;
  } catch (std::invalid_argument & e) {
    result &= true;
  }


    return result;
}