#include <iostream>
#include <iomanip>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::string;
using std::round;
using std::floor;

int main(){
    double width, height;
    width = 6;
    height = 13;
    while(cin >> width >> height ){
    if ( width == height){
            cout << setw(width) << '|' << endl;
            for (int i=1; i < height-1; i++){
                cout << setw(height - i) << '/' << setw(i) << '|' << endl;
             }
             cout << '/' << string(height-2, '_') << '|' << endl;
            
        }
    double slope = height/width;
    if (width > height ){
        for ( int i = height -1 ; i >-1; --i){
            double spacing = i / slope;
            spacing = floor(spacing);
            if (i >0){
            cout << setw(spacing+1) << '/' << setw(width-spacing-1) << '|'<< endl;
            }
            else{
                cout << '/' << string(width-2, '_') << '|'<<endl;
            }
        }
    }   
    if (width < height ){
        double slope = height/width;
        for ( int i = height -1 ; i >-1; --i){
            double spacing = i / slope;
            spacing = floor(spacing);
            if ( spacing + 1 == width){
                cout << setw(width) << '|' <<endl;
            }
            else if (i >0){
            cout << setw(spacing+1) << '/' << setw(width-spacing-1) << '|'<< endl;
            }
            else{
                cout << '/' << string(width-2, '_') << '|'<<endl;
            }
        }
}
}
}