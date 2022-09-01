#include<iostream>
using namespace std;
// if n=3
// 123
// 123
// 123
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << j;
            j += 1; 
        }
        cout << endl;
        i += 1;
    } 
}