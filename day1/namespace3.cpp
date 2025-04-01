#include <iostream>
using std::cout;
using std::endl;

int number = 100;

namespace test{
    int number = 10;
    void display(){
        cout << "test::display()" << endl;
    }
}//end of namespace test

// 被认为和上面的命名空间是一块的，所以不可以定义相同的变量或函数
namespace test{
    int number2 = 20;
    void display2(){
        cout << "test::display2()" << endl;
    }
}

int main(void){
	using test::number;
    using test::display;
    using test::number2;
    using test::display2;
    cout << "test::number " << number << endl; 
    cout << "test::number2 " << number2 << endl; 
    display();
    display2();
	return 0;
}