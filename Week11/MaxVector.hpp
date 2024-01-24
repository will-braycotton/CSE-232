#pragma once
#include <vector>
using std::vector;
#include <algorithm>

template <typename T>
vector<T> MaxVector( vector<T> first, vector <T> second){
    vector<T> main;
    int i=0;
    transform(first.begin(), first.end(), std::back_inserter(main),[ &i, &second] (T num){
        T result = num;
        if ( i < int(second.size())){
            T second_num = second[i];
            if ( second_num > num){
                result = second_num;
            }
        }
        i++;
    return result;
    });
    return main;
}
