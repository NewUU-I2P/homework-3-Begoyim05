#include <string>
#include <iostream>
using namespace std;

int main(){
    string addres;
    int g;
    cin>>addres;
    if (addres=="FFFFFFFFFFFF"){
        cout<<" this address is broadcast\n";
        exit(0);
    }
    char l=addres[0];
    char m=addres[1];
    if ( isdigit(addres.at(0)) ) {
        l -= 48;
    }
    else{
        l -= 55;
    }
    if ( isdigit(addres.at(1)) ) {
        m -= 48;
    }
    else{
        m-=55;
    }
    g=(l*16+m)%2;
    switch(g){
        case 0:
            cout<<" this address is unicast\n";
            break;
        case 1:
            cout<<" this address is multicast\n";
            break;
    }
}



