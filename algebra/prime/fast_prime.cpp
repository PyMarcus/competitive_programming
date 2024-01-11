#include <iostream>
#include <cmath>

using namespace std;

#define X ios_base::sync_with_stdio(0);

// uma forma de ver se o número é primo, mais facilmente, é 
// verificar se até a raíz ele é primo, se o for, ele será
// isso pode melhorar o desempenho.
void fastPrime(int num){
    int root =  sqrt(num);
    int sum = 0;
    for(int i = 2; i <= root; i++){
        if(num % i == 0){
            sum++;
            if (sum > 0){
                cout << "Not Prime" << endl;
                return;
            }
        }
    }
    cout << "Prime" << endl;
}

int main(){
    X
    cin.tie();
    
    int n, a;

    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        cin >> a;
        fastPrime(a);
    }

    return 0;
}