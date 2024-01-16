#include <iostream>
using namespace std;
int main(){
    int arr[5]={5,4,3,2,1};
    int index=0;
    for(int j=0;j<4;j++){
    for(int i=1;i<5;i++){
        if(arr[i]<arr[index])
        index=i;
    }
   swap(arr[index],arr[j]);
    }
    for(int k=0;k<5;k++){
        cout<<arr[k]<<" ";
    }
}