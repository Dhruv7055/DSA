#include<iostream>
using namespace std;
/* if n = 4
       1
      22
     333
    4444    */
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int space  = n - i;
        while(space){
            cout << " ";
            space--;
        }
        int j = 1;
        while(j <= i){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}