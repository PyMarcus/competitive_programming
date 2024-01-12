#include <iostream>
#include <cmath>

using namespace std;

#define X ios_base::sync_with_stdio(0);
#define ROUND fixed<<setprecision(2);

/*
Input
The input contains many instances and ends 
with end of file (EOF). Each instance consists 
in a line with six integers: R1 (1 ≤ R1) , X1(|X1|),
 Y1(|Y1|), R2 (R2 ≤ 1000), X2(|X2|), Y2 (Y2 ≤ 1000).

The circle drawn by the hunter has radius R1 and center 
(X1; Y1). The circle that represents the flower area have 
radius R2 e center (X2; Y2).

Output
For each test case we will have a line of output, containing
 “MORTO” (dead) or “RICO” (rich) if the hunt can pick the flower.
*/

bool internalCircunference(int r1, int x1, int y1, int r2, int x2, int y2){
    if(sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) < r1 - r2) return true;
    return false;
}

bool internalTangCircunference(int r1, int x1, int y1, int r2, int x2, int y2){
    if(sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) == r1 - r2) return true;
    return false;
}

int main(){
    X 
    cin.tie();

    int R1, X1, Y1, R2, X2, Y2;

    while(cin>>R1>>X1>>Y1>>R2>>X2>>Y2){
        if(internalCircunference(R1, X1, Y1, R2, X2, Y2) || internalTangCircunference(R1, X1, Y1, R2, X2, Y2)){
            cout << "RICO" << endl;
        }else{
            cout << "MORTO" << endl;
        }
    }
    if(cin.eof()){

    }
    return 0;
}