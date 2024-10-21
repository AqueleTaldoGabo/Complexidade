#include <iostream>
using namespace std;

int checaVal(int *v, int num);

int main(){
    int n, num, indi, instru=12;
    int *v;
    cin >> n;
    instru+= 2*n;
    if(!(v = new(nothrow) int[n])){
        cout << "Estorou a memoria" << endl;
        return -1;
    }
    for(int i = 0; i<n; i++){
        *(v+i) = rand()%n + 1;
    }
    cin >> num;
    indi = checaVal(v, num);
    cout << "Indice :" << indi << endl;
    cout << "Complexidade pior casao: " << instru << endl;
    cout << "Complexidade melhor caso: " << instru- n + 1 << endl;
}

int checaVal(int *v, int num){
    int size = sizeof(v)/sizeof(v[0]);
    for(int i = 0; i<size; i++){
        if(v[i] == num)
            return i;
    }
    return -1;
}