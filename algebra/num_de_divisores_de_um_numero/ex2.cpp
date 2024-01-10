#include <iostream>
#include <vector>

using namespace std;

#define X ios_base::sync_with_stdio(0);
#define ROUND fixed << setprecision(2);

// One integer each line: the divisor summation of the integer given respectively.
void divisorSummation(int num){
    int a = 1;
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            a += i;
        }
    }
    
    cout << a << endl;
}



int main(){
    X
    cin.tie();

    int n, a;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        cin >> a;
        divisorSummation(a); 
    }

    return 0;
}