#include<iostream>
using std::cout;
using std::endl;

/**
如果匿名空间中定义了和全局位置中同名的实体，直接访问会有冲突。
如果使用::作用域限定符，也无法访问到匿名空间中重名的实体，只能访问到全局的实体。
 */
// 以前想要跨文件使用，以函数为例，只有一种方式，在头文件中声明，在实现文件中实现，都包含这个头文件的前提下可以调用函数
int val = 10;

namespace{
    int val = 0;
    void fun(){
        cout << "anonymous namespace" << endl;
    }
}

int main(){
    cout << ::val << endl;
    fun();
    ::fun();
    return 0;
}