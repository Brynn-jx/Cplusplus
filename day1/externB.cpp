#include<iostream>
using std::cout;
using std::endl;

extern int val;
extern void print();

// 命名空间的外部引用必须得声明同名的命名空间
namespace test{
    extern int num;
    extern void fun();
}

int main(){
    cout << val <<endl;
    print();
    cout << test::num << endl;
    test::fun();
    return 0;
}