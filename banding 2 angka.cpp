#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;

    if(1<=a && b<=100){
        if(a==b){
            cout<<a<<" == "<<b<<" "<<endl;
        } 
        if(a!=b){
            cout<<a<<" != "<<b<<" "<<endl;
        }

        if(a<b){
            cout<<a<<" < "<<b<<" "<<endl;
        }
        if(a<=b){
            cout<<a<<" <= "<<b<<endl;
        }
        if(a>b){
            cout<<a<<" > "<<b<<" "<<endl;
        }        
        if (a>=b){
            cout<<a<<" >= "<<b<<endl;
        } 
    } else{
        cout<<"INPUTAN SALAH";
    }
}