#include <iostream>
using namespace std;

    double num (int num){
        int r = num * num * num;
        return r;
    }
int main(){

    cout << num(5);

    return 0;
}