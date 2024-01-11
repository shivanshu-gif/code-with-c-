#include <iostream>
using namespace std;
int main(){
    int i,fact=1,n;
    cout<<"enter a number";
    cin>>n;
    for(i=1;i<=n;i++){
        fact=i*fact;
    }
    cout<<fact<<endl;
}