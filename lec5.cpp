// #include <iostream>
// using namespace std;

// int main(){
//     int i = 1;
//     int sum = 0;

    
//     while (i <= 10){ 
//         sum = sum + i;

//         i ++ ;
//         }
//         cout << "sum= "<< sum ;
        
//         }
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 123;
//     int rev = 0;

//     do {
//         rev = rev * 10 + (a % 10);
//         a /= 10;
//     } while (a != 0);

//     cout << "reverse = " << rev;
//     return 0;
// }
#include <iostream>
using namespace std;
int main () {
    int fact = 5;
    int sum = 1;
    for (int i = 1; i<=fact; i++){
        sum *= i;
    }
    cout << sum;
    }

