#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::stoi;
// discovered from https://www.scaler.com/topics/string-to-int-in-cpp/


int main(){

string x,
    y;
while (std::cin >> x >> y) {
  int num_x = stoi(x);
  int num_y = stoi(y);

  if (x[x.size() - 2] == 'c'){
    num_x = num_x * 10;
  }
  else if (x[x.size()-2] == 'k'){
    num_x = num_x * 1000000;
  }
  else if (x[x.size()-2] == 'm'){
    num_x = num_x * 1;
  }
  else {
    num_x = num_x * 1000;
  }


  if (y[y.size() - 2] == 'c'){
    num_y = num_y * 10;
  }
  else if (y[y.size()-2] == 'k'){
    num_y = num_y * 1000000;
  }
  else if (y[y.size()-2] == 'm'){
    num_y = num_y * 1;
  }
  else {
    num_y = num_y * 1000;
}
if (num_x > num_y){
    cout << x << " is larger than " << y << endl;
}
if (num_x < num_y){
    cout << x << " is smaller than " << y <<endl;
}
if (num_x == num_y){
    cout << x << " is the same as " << y <<endl;
}
}
}