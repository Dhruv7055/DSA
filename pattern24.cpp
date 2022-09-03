#include<iostream>
using namespace std;
/* if n = 4
   1111
    222
     33
      4    */ 
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
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}