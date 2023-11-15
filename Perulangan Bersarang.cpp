#include <iostream>
using namespace std;

int main() {
    int N;
    int No = 0;
    cin>>N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<No++;
            if (No==10)
            {
                No=0;
            }
            
        }
        cout<<endl;
    }
    
}
