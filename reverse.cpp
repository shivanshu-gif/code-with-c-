#include <iostream>
using namespace std;

int main(){
    cout<<"enter the size";
    int size;
    cin>>size;
    int arr[1000],i;
    for(i=0;i<size;i++){
        cin>>arr[i]; 
    }
    int j=0,k=size-1;
    while(j<k){
        swap(arr[j],arr[k]);
        j++;
        k--;
    }
    for(i=0;i<size;i++){
        cout<<arr[i];
    }


}