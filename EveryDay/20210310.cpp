#include<iostream>
using namespace std;

int partition(int *a, int low, int high){
    int pivot = a[low];
    while(low<high){
        if(high>low && a[high]>pivot)
            --high;
        a[low] = a[high];
        if(high>low && a[low]<pivot)
            ++low;
        a[high] = a[low];
    }
    a[low] = pivot;
    return low;
}


void quickSort(int *a, int low, int high){
    if(low < high){
        int pivotpos = partition(a, low, high);
        quickSort(a, low, pivotpos - 1);
        quickSort(a, pivotpos + 1, high);
    }
}

int main(){
    int n = 0;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quickSort(a, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
