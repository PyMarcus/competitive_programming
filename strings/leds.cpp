#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <string>

using namespace std;

#define X ios_base::sync_with_stdio(0);

int main() {
    X 
    cin.tie();
    
    map<int, int> m;
    m[1] = 2;
    m[2] = 5;
    m[3] = 5;
    m[4] = 4;
    m[5] = 5;
    m[6] = 6;
    m[7] = 3;
    m[8] = 7;
    m[9] = 6;
    m[0] = 6;

    int n;
    long long leds = 0, x;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        for (char c : to_string(x)) {
            leds += m[c - '0'];
        }
        cout << leds << " leds" << endl;
        leds = 0;  
    }

    return 0;
}
