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

    int start = 'A' + 0;
    int end   = 'Z' + 0;
    int n, v;
    string word;

    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        cin >> word;
        cin >> v;
        for(int j = 0; j < word.size(); j++){
            if(word[j] - v < 65){
                // cout << "WORD " << word[j] << " SUB " << (word[j] - v) << " CORR  " << ('Z' - 0) << endl;
                word[j] = ('Z' - 0) - ( ('A' - 0) - (word[j] - v)) + 1;
            }else{
                word[j] = word[j] - v;
            }
        }
        cout << word << endl;
    }     

    return 0;
}
