#include <iostream>
using namespace std;
int main(){
    float a;
    float b;
    float c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (1<a & a<3){
        cout << a << endl;
    }
    if (1<b & b<3){
        cout << b << endl;
    }
    if (1<c & c<3){
        cout << c << endl;
    }
    if (not(1<a & a<3) & not(1<b & b<3) & not(1<c & c<3)){
        cout << "Таких чисел нет" << endl;
    }
}