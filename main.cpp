#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int probleme, j;
    cin >> probleme;
    
    vector<string> a(101), b(101);
    
    for(int i = 1; i <= probleme; i++){
        cin >> a[i]; // boli
        cin >> b[i]; // specializare
    }
    
    int doctori;
    cin >> doctori;
    for(int i = 1; i <= doctori; i++){
        string id, specializare;
        cin >> id >> specializare;
        
        bool accepted = false;
        for(j = 1; j <= probleme; j++){
            if(specializare == b[j]){
                cout << a[j] << " Acceptat" << endl;
                accepted = true;
                break;
            }
        }
        
        if (!accepted) {
            cout << id << " Respins" << endl;
        }
    }
    
    return 0;
}

