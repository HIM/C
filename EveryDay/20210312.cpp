#include<iostream>
using namespace std;
int findMin(int *arr, int n){
    int min = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min)
            min = arr[i];
    }
    cout << min << " ";
    return min;
}

int findMax(int *arr, int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
            max = arr[i];
    }
    cout << max << " ";
    return max;
}

int findDivisor(int a, int b){
    if(b>a){
        int temp = a;
        a = b;
        b = temp;
    }
    while(true){
        int x = a % b;
        if(x==0){
            return b;
        }else{
            a = b;
            b = x;
        }
    }
}

int main(){
    int n = 0;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int min = findMin(arr, n);
    int max = findMax(arr, n);
    int divisor = findDivisor(max, min);
    cout << divisor << endl;

    return 0;
}
