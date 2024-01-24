#include <string>
#include <vector>
#include <iterator>
#include <iostream>
using std::cout;

int Func(int a) 
{
    std::vector<int> b(a);
    int ta = 12;
    b.clear();
    for ( int i =0; i < a; i++){
        b.push_back(ta);
        ta++;
    }
    std::vector<int> r(b);
    std::vector<int> c;
    for (auto ptr = r.rbegin(); ptr != r.rend(); ptr++){
        c.push_back( *ptr);
    }


    std::vector<int> new_b;
    int size1= b.size();
    for ( int i=0; i < size1; i++){
        new_b.push_back( (2 * b[i] + c[i]));

    }
    int counter=0;
    int size = new_b.size();
    for ( int i= 2; i < size -2; i++){
        if ((std::to_string(new_b[i]).find("2") != std::string::npos)){
            counter++;
        }
    }
    return counter;
}
 

 int main(){
    cout << Func(23) << std::endl;
    cout << Func(99) << std::endl;
    cout << Func(195) << std::endl;
 }