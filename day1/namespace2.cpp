#include <iostream>
using std::cout;
using std::endl;

int number = 100;

namespace test{
    int number = 10;
    void display()
    {
        cout << "wd::display()" << endl;
    }
}//end of namespace test

// 使用using 声明机制，建议使用什么实体就声明什么实体，尽量在局部作用域

int main(void){
	using test::number;
    using test::display;
    cout << "test::number" << number << endl; 
    display();
	return 0;
}