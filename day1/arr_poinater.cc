#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int (*p)[5] = &arr;
    for(int i = 0; i < 5; i++){
        cout << (*p)[i] << endl;
    }
    int *p1 = arr;
    for(int i = 0; i < 5; i++){
        cout << p1[i] << endl;
    }
}