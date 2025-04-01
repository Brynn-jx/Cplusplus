#include<iostream>
using namespace std;
const int val = 10; // const 必须定义时初始化

int main(){
    cout << val << endl;
    int num = 20;
    const int *p = &val;
    p = &num;
    int * const p1 = &num;
    *p1 = 30;
    cout << *p << ' ' << *p1 << endl;
    return 0;
}