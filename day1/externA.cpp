#include<iostream>
using std::cout;
using std::endl;

int val = 10;

namespace test{
    int num = 20;
    void fun(){
        cout << "fun" << endl;
    }
}// end of namespace test

void print(){
    cout << "externA" << endl;
}