#include <iostream>
using namespace std;
int main(){

    float joao = 300;
    float paulo = 300;
    float paulogastou = 50;

    cin >> joao >> paulo >> paulogastou;

    if(joao == (paulo - paulogastou))
    {
        cout << "iguais";
    }

    if(joao != (paulo - paulogastou))
    {
        cout << "diferentes";
    }
      return 0;
}
