#include <iostream>
using namespace std;

int main() {
    float num1;
    float num2;
    float num3;
    float big;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    big=(num1>num2)? num1: num2;
    big=(num1>num3)? num1: num3;
    big=(num2>num3)? num2: num3;
    cout<<"The maximum number is "<<big<<endl;
}
