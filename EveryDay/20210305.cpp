#include<iostream>
using namespace

float calculate(char str[]){

    char n1 = str[0];
    char op = str[1];
    char n2 = str[2];
    if(op == "+"){
        return n1 + n2;
    }


    return 0.0;
}


int main(){
    cout<<"ÇëÊäÈëËãÊ½£º"<<endl;

    //int x, y
    char str[3];
    cin>>str;
    //char p;
    //cin>>x>>p>>y;
    float z = calculate(str);
    cout<<z<<endl;


    return 0;
}
