#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Type a number: ";
    cin>>n;

    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"not prime"<<i<<endl;
        }else{
            cout<<"prime"<<n<<endl;
        }
        i++;
    }
     



}