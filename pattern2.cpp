#include<iostream>
using namespace std;
// if n = 3
// 111
// 222
// 333
int main(){
    int n;
    cin >> n;
    int i = 1;
    while( i <= n){
        int j = 1;
        while(j <= n){
            cout << i;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}