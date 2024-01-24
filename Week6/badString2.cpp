#include<iostream>
using std::cin; using std::cout; using std::endl;
#include<string>
using std::string;

/*
  find the smallest (by ASCII value) character
  in the parameter str and return that char
*/
char fn2(string str){
  char ch = str[0];
  for (auto i = str.size(); i>=0; --i){
    cout << ch << endl;
    if (str[i] < ch)
      ch = str[i];
  }
  return ch;
}

char fn2_fixed(string str){
  char ch = str[0];
  for (int i = str.size() -1; i>=0; --i){
    cout << ch << endl;
    if (str[i] < ch)
      ch = str[i];
  }
  return ch;
}


/*
  make a substring of the parameter str
  of size 3, consisting of:
  - the smallest chararter as found by fn2
  - the character in front of the smallest
  - the character in back of the smallest.
  Thus fn1("cdeaxyz") --> "eax"
*/
string fn1(string str){
  char ch = fn2_fixed(str);
  unsigned int indx = str.find(ch);
  return str.substr(indx-1, 3);
}

int main (){
  string my_string = "abcdefg";
  //cout << fn2_fixed(my_string) << endl;  
  cout << fn1(my_string) << endl;
}