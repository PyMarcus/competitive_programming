#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

#define X ios_base::sync_with_stdio(0);
#define Z fixed << setprecision(2);

void checkParenthesis(string word){
    vector<char> s;

    for(char c: word){
        if(c == '(' || c == ')'){
            s.push_back(c);
        }
    }

    if(s.size()%2 != 0){
        cout << "is incorrect" << endl;
        return;
    }

    bool check = false;
    while(!s.empty()){
        char last = s.back();
        s.pop_back();
    

        char first = s.front();
        s.erase(s.begin());
        if((int)first < (int)last){
            check = true;
        }else{
            check = false;
            cout << "is incorrect" << endl;
            break;
        }
    }
    if(check)
    cout << "is correct" << endl;
    else
    cout << "is incorrect" << endl;
}

int main(){
    X
    cin.tie();
    string word;

    for(int i = 0; i < 10000; i++){
        getline(cin, word);
        checkParenthesis(word);
    }

    return 0;
}
