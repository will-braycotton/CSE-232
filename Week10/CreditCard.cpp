#include <iostream>
#include <string>
#include <vector>
#include "CreditCard.h"
#include "Validator.h"

using std::string;
using std::cout;using std::endl;

CreditCard::CreditCard(string const & num){
    number = num;
   string prefix= number.substr(0,1);
   string result = "";
   string prefix_2= number.substr(0,2);
   string prefix_3= number.substr(0,3);
   string prefix_4= number.substr(0,4);

    if ( (prefix_2 == "34") || (prefix_2 =="37")){
        if ( number.size() == 15){
            result = "American Express";
        }
    } 
    else if ( (prefix_2 == "51") || (prefix_2 == "52") || (prefix_2 == "53") || (prefix_2 == "54") || (prefix_2 == "55")){
        if ( number.size() == 16){
            result = "MasterCard";
        }
    }
    else if ( prefix == "4"){
        if ((number.size() == 13) || (number.size()== 16)){
            result = "Visa";
        }
    }
    else if (( prefix_2 == "36") || ( prefix_2 == "38") || ( prefix_3 == "300") || ( prefix_3 == "301") || ( prefix_3 == "302")
        || ( prefix_3 == "303") || ( prefix_3 == "304") || ( prefix_3 == "305")){
            if (number.size() == 14){
            result = "Diners Club and Carte Blanche";
        }
    }
    else if (prefix_4 == "6011"){
        if (number.size() == 16){
            result = "Discover";
        }
    }
    else if (( prefix_4 == "2123") || ( prefix_4 =="1800")){
        if (number.size() == 15){
            result = "JCB";
        }
    }
    else if ( prefix == "3"){
        if (number.size() == 16){
            result = "JCB";
        }
    }
    if (result == ""){
        throw::std::invalid_argument("invalid");
    }
    else {
    int i =1;
    string doubled_string;
    string non_doubled_string;
    for_each(number.rbegin(), number.rend(), [&i,&doubled_string,&non_doubled_string](char a){ 
        int num = int(a) - 48 ;
        if ( i %2 == 0){
            num = num * 2;
            string str = std::to_string(num);
            doubled_string+= str;
        }
        else{
            non_doubled_string+= a;
        }
        i++;
    });
    int accumulated_a=0;
    for_each(doubled_string.begin(), doubled_string.end(), [&accumulated_a](char a){
        int num = int(a) - 48 ;
         accumulated_a+= num;
    });
    int accumulated_b =0;
    for_each(non_doubled_string.begin(), non_doubled_string.end(), [&accumulated_b](char a){
        int num = int(a) - 48 ;
        accumulated_b+= num;
    });
    int total = accumulated_b + accumulated_a;

    if ( total % 10 != 0){
        throw::std::invalid_argument("invalid");
    }

    }
    
}

string CreditCard::Type(){
string prefix= number.substr(0,1);
   string result;
   string prefix_2= number.substr(0,2);
   string prefix_3= number.substr(0,3);
   string prefix_4= number.substr(0,4);

    if ( (prefix_2 == "34") || (prefix_2 =="37")){
        if ( number.size() == 15){
            result = "American Express";
        }
    } 
    else if ( (prefix_2 == "51") || (prefix_2 == "52") || (prefix_2 == "53") || (prefix_2 == "54") || (prefix_2 == "55")){
        if ( number.size() == 16){
            result = "MasterCard";
        }
    }
    else if ( prefix == "4"){
        if ((number.size() == 13) || (number.size()== 16)){
            result = "Visa";
        }
    }
    else if (( prefix_2 == "36") || ( prefix_2 == "38") || ( prefix_3 == "300") || ( prefix_3 == "301") || ( prefix_3 == "302")
        || ( prefix_3 == "303") || ( prefix_3 == "304") || ( prefix_3 == "305")){
            if (number.size() == 14){
            result = "Diners Club and Carte Blanche";
        }
    }
    else if (prefix_4 == "6011"){
        if (number.size() == 16){
            result = "Discover";
        }
    }
    else if (( prefix_4 == "2123") || ( prefix_4 =="1800")){
        if (number.size() == 15){
            result = "JCB";
        }
    }
    else if ( prefix == "3"){
        if (number.size() == 16){
            result = "JCB";
        }
    }
return result;
}



int main(){
  cout << Validator();
}