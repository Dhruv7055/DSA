#include<iostream>
using namespace std;
// if n = 3
/* 1 2 3
   4 5 6
   7 8 9 */ 
int main(){
    int n;
    cin >> n;
    int count = 1;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << count << " ";
            j += 1;
            count += 1;
        }
        cout << endl;
        i += 1;
    }
}