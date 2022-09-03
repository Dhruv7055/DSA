#include<iostream>
using namespace std;
/* if n=4
   1234
    123
     12
      1       */ 
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int space  = i - 1;
        while(space){
            cout << " ";
            space--;
        }
        int j = 1;
        while(j <= n-i+1){
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}