#include <iostream>
#include <string>
using namespace std;

struct Peserta {
    string id;
    int sesi1, sesi2, sesi3;

    Peserta(){}

    Peserta(string _id, int _sesi1, int _sesi2, int _sesi3){
        id = _id;
        sesi1 = _sesi1;
        sesi2 = _sesi2;
        sesi3 = _sesi3;
    }
};

bool bandingPeserta(Peserta peserta){
    if(peserta.sesi3>peserta.sesi2){
        return peserta.sesi3 > peserta.sesi2;
    } else if (peserta.sesi2 > peserta.sesi1){
        return peserta.sesi2 > peserta.sesi1; 
    } else if (peserta.sesi1 > peserta.sesi1){
        return peserta.sesi1 > peserta.sesi1;
    }
    
    
}

int main(){
    int T;
    cin>>T;

    for (int t = 0; t < T; ++t){
        int N, M;
        cin>>N>>M;
        Peserta peserta[N];

        for (int i = 0; i < N; i++)
        {
            cin>>peserta[i].id>>peserta[i].sesi1>>peserta[i].sesi2>>peserta[i].sesi3;
        }

        for (int i = 0; i < M; i++)
        {
            bandingPeserta(peserta[i]);

            if (bandingPeserta(peserta[i]) == true)
            {
                cout<<"YA"<<endl;
            } else{
                cout<<"TIDAK"<<endl;
            }
            
        }
        
        return 0;

    }

}