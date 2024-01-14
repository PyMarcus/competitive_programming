#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

#define X ios_base::sync_with_stdio(0);
#define Z fixed << setprecision(2);

void checkParenthesis(string word){
    stack<char> s;

    for(char c: word){
        if(c == '(' || c == ')'){
            s.push(c);
        }
    }

    bool check = false;
    while(!s.empty()){
        char last = s.top();

        s.pop();

        if (s.empty()) {
            check = false;
            break;
        }

        char first = s.top();
        s.pop();

        if((int)first < (int)last){
            check = true;
        }else{
            check = false;
            break;
        }
    }
    cout << check << endl;
}

int main(){
    X
    cin.tie();
    string word;

    for(int i = 0; i < 2; i++){
        getline(cin, word);
        checkParenthesis(word);
    }

    return 0;
}