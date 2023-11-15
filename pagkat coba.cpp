#include <iostream>
using namespace std;
int pangkat(int n, int x){
    int hasil = n;
    for (int i = 0; i < x; i++){
        hasil*=n;
    }
    return hasil;
}
int main(){
    cout<<pangkat(2, 4);
}