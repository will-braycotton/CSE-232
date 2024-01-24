#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include <cmath>

using std::pow;

int ToPowerOf2 (int &num ){
    int i = 0;
    int power, difference;
    while (i > -1){
        int power = pow (2, i);
        i++;
        if (power > num){
            difference = power - num;
            i = -1;
            num = power;
        }
        
    }
    return difference;
}


int main(){
    int x=10;
    cout << &x << endl;
    cout <<"result= " << ToPowerOf2(x)<< endl;
    cout << "x= " << x << endl;
}