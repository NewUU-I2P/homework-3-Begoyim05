#include <iostream>
using namespace std;

int main() {
    char sex;
    float height;
    cout<<" what is your sex? (in capital letters) ";
    cin>>sex;
    cout<<" what is your height?(in meters) ";
    cin>>height;
    if (sex=='M'){
        if (height<1.70) {
            cout<<"you are short\n ";
        }
        if (height>=1.70 && height<1.85){
            cout<<"you are normal\n";
        }
        if(height>1.85){
            cout<<"you are tall\n";
        }
    }
    if (sex=='F'){
        if (height<1.60) {
            cout<<"you are short\n ";
        }
        if (height>=1.60 && height<1.75){
            cout<<" you are normal\n";
        }
        if (height>1.75){
            cout<<"you are tall\n";
        }

    }
}
