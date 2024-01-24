#pragma once

template <typename T>
void CopyStockPrices( T *source, T * destination){
    int i=0;
    while ( i < sizeof(source) -1 ){
            destination[i] = source[i];
        i++;
    }
}