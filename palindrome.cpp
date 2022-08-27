#include<iostream>
using namespace std;
int main(){
    int r = 0, tmep, digit, n;
    cout << "Enter a positive numebr" << endl;
    cin >> n;
    int temp = n;
    while(temp != 0){
        digit = temp % 10;
        r = r * 10 + digit;
        temp = temp / 10;
    }
    cout << "The reverse of the number is " << r << endl;
    if(n == r) 
        cout << "The number is a palindrome number" << endl; 
    else
        cout << "The number is not palindrome number" << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//      int n, num, digit, rev = 0;

//      cout << "Enter a positive number: ";
//      cin >> num;

//      n = num;

//      do
//      {
//          digit = num % 10;
//          rev = (rev * 10) + digit;
//          num = num / 10;
//      } while (num != 0);

//      cout << " The reverse of the number is: " << rev << endl;

//      if (n == rev)
//          cout << " The number is a palindrome.";
//      else
//          cout << " The number is not a palindrome.";

//     return 0;
// }