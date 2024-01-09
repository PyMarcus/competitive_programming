#include <iostream>
#include <vector>

using namespace std;

#define X ios_base::sync_with_stdio(0);
#define ROUND fixed << setprecision(2);

bool existsIn(int num, const vector<int> &v){
    int left = 0;
    int right = v.size() - 1;

    while(left <= right){
        int middle = left + (right - left) / 2;
        if(v[middle] == num){
            return true;
        }else if (num > v[middle]){
            left = middle + 1;
        }else{
            right = middle - 1;
        }
    }

    return false;
}

int findNumberOfDivisor(int a, int b){
    int d = 1;
    vector<int> v;
    
    for (int i = 2; i <= a; i++){
        if(a % i == 0){
           v.push_back(i);
        }
    }
    for(int i = 2; i <= b; i++){
        if(b % i == 0){
            if(existsIn(i, v)){
                    d++;
                }
            }
    }
    return d;
}

//One integer describing number of common divisors between two numbers.
void numberOfCommonDivisors(){
    int a, b, n;

    cin >> n;

    cin.ignore();
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        cout << findNumberOfDivisor(a, b) << endl;
    }
}


int main(){
    X 
    cin.tie();

    numberOfCommonDivisors();

    return 0;
}