#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::stoi;
// discovered from https://www.scaler.com/topics/string-to-int-in-cpp/


int main(){

int x,
    y,
    z;
while (std::cin >> x >> y >> z) {
int n1,
    n2,
    n3;
n1 = abs(x - y); 
n2 = abs(x - z);
n3= abs(y - z);
if ((n1 < n2) && (n1 < n3)){
  cout << "The smallest diff of " << x << ", " << y << ", and " << z << " is " << n1 <<'.'<< endl;
}
else if ((n2 < n1) && (n2 < n3)){
  cout << "The smallest diff of " << x << ", " << y << ", and " << z << " is " << n2 <<'.'<< endl;
}
else if ((n3 < n2) && (n3 < n1)){
  cout << "The smallest diff of " << x << ", " << y << ", and " << z << " is " << n3 <<'.'<< endl;
}
}



}