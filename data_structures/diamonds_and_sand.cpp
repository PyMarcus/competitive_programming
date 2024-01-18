#include <iostream>
#include <string>
#include <stack>

using namespace std;

#define X ios_base::sync_with_stdio(0);

void checkDiamont(string line){
    int diamonts = 0; 
    stack<char> s;

    for(char c : line){
        if(c == '<'){
            s.push(c);
        }else if(c == '>'){
            if(!s.empty())
                s.pop();
            else 
                s.push(c);
        }
        if(s.empty() && (c == '<' || c == '>')){
             diamonts++;
        }
    }


    cout << diamonts + 1 << endl;
}

int main(){
    X
    cin.tie();

    int n, count = 0;
    string line;

    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        getline(cin, line);
        checkDiamont(line);
    }

    return 0;
}