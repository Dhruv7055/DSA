#include<iostream>
using namespace std;
/* if n=4
       *
      **
     *** 
    ****     */
int main(){
    int i = 1;
    int n;
    cin >> n;
    while(i <= n){
        int space = n - i;
        while(space){
            cout << " ";
            space--;
        }
        int j = 1;
        while(j <= i){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}