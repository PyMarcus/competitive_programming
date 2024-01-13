#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

#define X ios_base::sync_with_stdio(0);

int halfWord(string word){
    return (int)word.size() / 2;
}

void encrypt(string word){
    string newWord;
    int half = halfWord(word);
    for(int i = 0; i < word.size(); i++){
        if(isalpha(word[i])){
            word[i] =  (char)(word[i] + 3);
        }else{
            word[i] =  (char)(word[i]);
        }
    }

    // cout << newWord << endl;

    reverse(word.begin(), word.end());

    // cout << newWord << endl;

    for(int i = half; i < word.size(); i++){
        // cout << "B " << newWord[i] << endl;
            // cout << "A " << newWord[i] << endl;
            word[i] = (char)(word[i] - 1);
    }
    cout << word << endl;
}

int main(){
    X
    cin.tie();

    int n;
    string word;

    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        getline(cin, word);
        encrypt(word);
    }

    return 0;
}