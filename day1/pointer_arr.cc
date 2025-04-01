#include <iostream>
using std::cout;
using std::endl;

int main(){
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    int *p1 = &num1;
    int *p2 = &num2;
    int *p3 = &num3;
    int* arr[3] = {p1, p2, p3};
    for(int i = 0; i < 3; i++){
        cout << *arr[i] << endl;
    }
    cout << **(arr + 1) << endl;
    cout << p2 << endl;
    return 0;
}