// #include <iostream>
// using namespace std;

// int factorial(int n) {
//     int fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// int main() {
//     int num, temp, digit, sum = 0;
//     cout << "enter a number :";
//     cin >> num;

//     temp = num;

//     while (temp > 0) {
//         digit = temp % 10;
//         sum += factorial(digit);
//         temp /= 10;
//     }

//     if (sum == num)
//         cout << "Strong Number";
//     else
//         cout << "Not a Strong Number";

//     return 0;
// }


#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int num, originalnum, remainder, n = 0;
    double result = 0.0;
    cout << "enter a number:::";
    cin >> num;
    originalnum = num;

    while (originalnum  !=0)(
        originalnum /= 10
    );
}
