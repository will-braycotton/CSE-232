#pragma once
#include <vector>

class ForgetfulVector{

private:
std::vector<int> main;
std::vector<int> first_occurance;

public:
void push_back( int);
int at(int );
int size();
void print();
};