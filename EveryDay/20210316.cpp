#include<iostream>
using namespace std;
bool prime(int i){
    if(i==1){
        return false;
    }
    if(i%2==0){
        return false;
    }
    for(int j=3;j<i;j+=2){
        if(i%j==0){
            return false;
        }
    }
    return true;
}
int main(){
    int sum = 0;
    for(int i=1;i<100;i++){
        if(prime(i))
            sum += i;
    }
    cout<<sum<<endl;
    return 0;
}
