#include <iostream>
#include <unordered_map>

using namespace std;

#define X ios_base::sync_with_stdio(0);
#define ROUND fixex << setprecision(2);

unordered_map<int, long long> factorialCache;

// fatorial é muito custoso, por isso, deve-se usar um cache
// para aproveitar o cálculo já realizado, evitando refazer a 
// árvore de recursão.
long long factorial(int num)
{
    if(num == 0 || num == 1 ){
        return 1;
    }

    if(factorialCache.find(num) != factorialCache.end()){
        return factorialCache[num];
    }
    return num * factorial(num - 1);
}

void fatorialSum(int a, int b)
{
    long long sum = 0;   

    sum += factorial(a);
    sum += factorial(b);

    cout << sum << endl;
}

int main()
{
    X 
    cin.tie(0);

    int a, b;

    // até EOF
    while(cin >> a >> b)
    {
        fatorialSum(a, b);
    }

    if(cin.eof()){

    }

    return 0;
}