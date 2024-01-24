#include <iostream>
#include <iomanip>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::string;
using std::round;

int main(){
    double width, height;
    width = 7;
    height = 10;
  // while(cin >> width >> height ){
        if ( width == height){
            cout << setw(width) << '|' << endl;
            for (int i=1; i < height-1; i++){
                cout << setw(height - i) << '/' << setw(i) << '|' << endl;
             }
             cout << '/' << string(height-2, '_') << '|' << endl;
            
        }
        if ( width < height){
            cout << setw(width) << '|' << endl;
            double slope = width/height;
            for (double i= 1 ; i < height - 1; i++){
                double spacing =  slope * i; 
              // cout << spacing<< ' ';
                spacing = round(spacing);
               //cout << spacing;
                cout << setw(width - (spacing)) << '/' << setw(spacing) << '|' << endl;
            }
            cout  << '/' << string(width - 2 ,'_') << '|' << endl;
        }
        
        if (width > height ){
            double slope = width/height;
            for (double i= 1 ; i < height; i++){
                double spacing =  slope * i; 
                spacing = round(spacing);
                cout << setw(width - (spacing -1)) << '/' << setw(spacing -1) << '|' << endl;
        }
            cout  << '/' << string(width - 2 ,'_') << '|' << endl;
}
}
