#include<iostream>
#include<string>
using namespace std;
#define MAX_SIZE 100

string compress(string instr){

    string str;
    int count = 1;
    for(int i=0;i<instr.length();i++){

        if(instr[i] == instr[i+1]){
            count++;
            continue;
        }
        str += instr[i];
        str += to_string(count);
        count = 1;

    }
    if(str.length() > instr.length()){
        return instr;
    }
    return str;

}


int main(){
    char str[MAX_SIZE];
    cin>>str;
    string s = compress(str);
    cout<<s<<endl;
    system("pause");
    return 0;
}
