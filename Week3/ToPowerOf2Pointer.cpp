#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include <cmath>

using std::pow;

int ToPowerOf2Pointer(int *num){
    int i = 0;
    int result;
    while (i > -1){
        int power = pow (2, i);
        i++;
        if (power > *num){
            result = power - *num;
            i = -1;
            *num = power;
        }
        
    }
    return result;
}

int main(){
    int x=4000;
    cout <<"result= " << ToPowerOf2Pointer(&x)<< endl;
    cout << "x= " << x << endl;
}
