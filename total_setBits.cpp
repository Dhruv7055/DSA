#include<iostream>
using namespace std;

int setBitsA(int a){
    int count = 0;
    while(a != 0){
        if(a & 1){
            count++;
        }
        a = a >> 1;
    } 
    return count;
}
int setBitsB(int b){
    int count = 0;
    while(b != 0){
        if(b & 1){
            count++;
        }
        b = b >> 1;
    } 
    return count;
}


int main(){
    int a, b;
    cin >> a >> b;
    int ans1 = setBitsA(a);
    int ans2 = setBitsB(b);
    cout << "Set bits of A = " << ans1 << endl;
    cout << "Set bits of B = " << ans2 << endl;
    int ans = ans1 + ans2;
    cout << "Total number of bits of A and B are = " << ans << endl;
    return 0;
}