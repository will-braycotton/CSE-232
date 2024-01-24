#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int DigitGetter(int number, int selection) {
    int digit = number;
    int i=0;
    while (i < selection){
        digit = digit / 10;
        i++;
    }
    int rem = digit % 10;
    if ((i > 0) && (digit ==0)){
        rem = -1;
    }
    return rem;

}

int main(){
    int x,y;
    while (cin >> x >>y){
        cout << x << ' ' << y << ' '<< DigitGetter(x,y) << endl;
    }
}
