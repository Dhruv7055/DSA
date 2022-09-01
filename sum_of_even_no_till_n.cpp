#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int i = 2;
    int n;
    cin >> n;
    while(i <= n){
        if(i % 2 == 0){
            sum = sum + i;
        }
        i++;
    }
    cout << sum << endl;
    
}