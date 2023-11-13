#include <iostream>
using namespace std;

int main(){
    float m=0;
    int n=0;
    char o;
    cout<<"first number=";
    cin>>m;
    cout<<"second number=";
    cin>>n;
    cout<<"what arithmetic operation ";
    cin>>o;
    switch(o) {
        case '/':
            m /= n;
            break;
        case '*':
            m *= n;
            break;
        case '+':
            m += n;
            break;
        case '-':
            m -= n;
            break;
    }
    cout<<m<<endl;
}

