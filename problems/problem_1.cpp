#include <iostream>
using namespace std;

int main() {
    float cost=0;
    cout<<" how many cubic meters of water? \n";
    cin>>cost;
    if (cost>30){
        if (cost>50){
            if (cost>60){
                cost=13+0.4*30+0.12*20+14+(cost-60)*1.5;
            }
            else{
                cost=13+0.4*30+0.12*20+(cost-50)*1.4;
            }
        }
        else{
            cost=13+0.4*30+0.12*(cost-30);
        }
    }
    else{
        cost=cost*0.4+13;
    }
    cout<<cost<<endl;
}
