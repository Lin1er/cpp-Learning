#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    while(N--){
        int n; cin>>n;
        int count=0;
        for (int i = 2; i*i <= n; i++)
        {
            if (n%i==0){
                count++;
            } else if (count>1){
                break;
            }
        }
        if (count>1)
        {
            cout<<"BUKAN"<<endl;
        } else{
            cout<<"YA"<<endl;
        }
        
    }
    return 0;
}
