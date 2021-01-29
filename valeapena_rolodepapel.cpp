#include <iostream>
using namespace std;
int main(){
    float emb1 = 0;
    float emb2 = 0;
    float emb3 = 0;
    float emb4 = 0;
    float rolo = 0;
    cin >> rolo;
    rolo = rolo / 24;
    emb1 = rolo * 4;
    emb2 = rolo * 8;
    emb3 = rolo * 12;
    emb4 = rolo * 16;
    cout << emb1 << " " << emb2 << " " << emb3 << " " << emb4;
    return 0;
    
}