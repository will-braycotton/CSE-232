#pragma once

#include <vector>
using std::vector;

std::vector<int>::const_iterator  FindSmallestIndexRange( const vector<int> &v, int first, int last );

template <typename T>
void DoubleIteratorRange( T ptr, T last){
    while ( ptr !=last){
       *ptr = (*ptr) * 2;
        ptr++;
    } 
}

