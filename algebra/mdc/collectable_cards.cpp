#include <iostream>

using namespace std;

#define X ios_base::sync_with_stdio(0);
#define ROUND fixed << setprecision(2);

/*
INPUT
The first input line contains a single integer N (1 ≤ N ≤ 3000), 
indicating the number of test cases. Each test case contains two 
integer numbers F1 (1 ≤ F1 ≤ 1000) and F2 (1 ≤ F2 ≤ 1000)  indicating, 
respectly, the among of collectable cards that Richard and Vicent have to change.

OUTPUT
For each test case there will be an integer number at the output, representing the
 maximum size of the stack of cards which can be exchanged between two players.
*/

void mdc(int a, int b){
    while(b != 0){
        int t = b;
        b = a % b;
        a = t;
    }

    cout << a << endl;
}

int main(){
    X 
    cin.tie();

    int n, a, b;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        cin >> a >> b;
        mdc(a, b);
    }

    return 0;
}