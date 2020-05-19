//Questão 1554 - Bilhar N+1 - URI Online Judge
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int c, n, x, y, bola, x1, y1, i;
    float d, menorD;

    cin >> c;
    while(c--){
        cin >> n;
        //Bola branca.
        cin >> x >> y;

        //Inicia a variável de menor distância com um valor altíssimo para que este seja substituído na primeira iteração
        menorD = 100000.0;
        
        //Lê as coordenadas das N bolas.
        for(i = 0; i < n; i++){
            cin >> x1 >> y1;

            //Calcula a distância entre as bolas
            d = sqrt(pow((x1 - x), 2) + pow((y1 - y), 2));

            //Caso a distancia seja menor que a menor distância já armazenada, substitui.
            if(d < menorD){
                menorD = d;
                //Numeração da menor bola.
                bola = i+1;
            }
        }
        cout << bola << endl;
    }

    return 0;
}