#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#define X ios_base::sync_with_stdio(0);

#define ROUND fixed << setprecision(2);


// Encontra o número de divisores de um dado número.
// Para isso, utiliza o fato de que se pode encontrar os divisores de um número
// através da fatoração em números primos, pois, existirão subconjuntos que serão
// os divisores do número.Para isso, pode-se encontrá-los somando os exponetes dos
// números primos com 1. Ex: 60 fatorado é: 2² . 3 . 5 => (2 + 1) . (1 + 1). (1 + 1) = 12 divisores.
long long numberOfDivisors(long long num) {
   long long total = 1;
   for(int i = 2;  i <= num; i++){
        if(num % i == 0){
      
            int e = 0; // expoente
            while(num % i == 0){
                e++;
                cout << "NUM " << num << endl;
                num /= i;
            }
            total *= e + 1;
            
        }
   }
    //if(num > 1) total *= 2;
   return total;
}


int main(){
    cin.tie(0);

    int number;
    cin >> number;
    cin.ignore();

    cout << numberOfDivisors(number) << " Divisores";

    return 0;
}
