#include<iostream>
using namespace std;

namespace test{
    int num = 10;
    void print(){
        cout << "hello world! test" << endl;
    }

}// end of namespace test


int fun(){
    cout << test::num << endl;
    test::print();
    return 0;
}

// 在使用using后就不用加作用域限定符了
using namespace test;

int main(){
    fun();
    cout << num << endl;
    print();
    return 0;
}
