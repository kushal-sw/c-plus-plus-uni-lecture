// #include<iostream>
// using namespace std;
// int main(){
//     int a[2][3] , sum=0;
//     cout<<"enter elements of 2D array:"<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cin>>a[i][j];
//             sum += a[i][j];
//         }
//     }
//     cout<<"elements of 2D array are:"<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Sum of all elements: "<<sum<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a[2][3] , b[2][3], c[2][3];
//     cout<<"enter elements of first matrix:"<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cin>>a[i][j];
//         }
//     }
//     cout<<"enter elements of second matrix:"<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cin>>b[i][j];
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             c[i][j] = a[i][j] + b[i][j];
//         }
//     }
//     cout<<" matrix after addition:"<<endl;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<c[i][j];
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int a[2][3], b[3][2], c[2][2] = {0};

//     cout<<"Enter first matrix:";
//     for(int i=0;i<2;i++)
//         for(int j=0;j<3;j++)
//             cin>>a[i][j];

//     cout<<"Enter second matrix:";
//     for(int i=0;i<3;i++)
//         for(int j=0;j<2;j++)
//             cin>>b[i][j];

//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             for(int k=0;k<3;k++){
//                 c[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }

//     cout<<"Result matrix:\n";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++)
//             cout<<c[i][j]<<" ";
//         cout<<endl;
//     }
// }
// transpose of array below
// #include<iostream>
// using namespace std;

// int main(){
//     int a[2][3], t[3][2];

//     cout << "Enter matrix elements:\n";
//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 3; j++){
//             cin >> a[i][j];
//         }
//     }

//     // Transpose logic
//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 3; j++){
//             t[j][i] = a[i][j];
//         }
//     }

//     cout << "Transpose matrix:\n";
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 2; j++){
//             cout << t[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// maximum element in 2D array
// #include<iostream>
// using namespace std;
// int main(){
//     int a[2][3], max;

//     cout << "Enter matrix elements:\n";
//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 3; j++){
//             cin >> a[i][j];
//         }
//     }
//     max = a[0][0];
//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 3; j++){
//             if(a[i][j] > max){
//                 max = a[i][j];
//             }
//         }
//     }

//     cout << "Maximum element in the matrix: " << max << endl;

//     return 0;
// }
// mimimum element in 2D array
// #include<iostream>
// using namespace std;
// int main(){
//     int a[2][3], min;
//     cout << "Enter matrix elements:\n";
//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 3; j++){
//             cin >> a[i][j];
//         }
//     }
//     min = a[0][0];
//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 3; j++){     
//             if(a[i][j] < min){
//                 min = a[i][j];
//             }
//         }
//     }
//     cout << "Minimum element in the matrix: " << min << endl;

//     return 0;
// }
// diagonal sum of square matrix
// #include<iostream>
// using namespace std;
// int main(){
//     int a[3][3], primarySum = 0 ;
//     cout << "Enter matrix elements:\n";
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             cin >> a[i][j];
//         }
//     }
//     for(int i = 0; i < 3; i++){
//         primarySum += a[i][i];
        
//     }
//     cout << "Primary diagonal sum: " << primarySum << endl;    

//     return 0;
// }
// array with pointers
#include <iostream>
using namespace std;

int main() {
    int arr[2][2];
    int (*p)[2] = arr;
    int sum = 0;

    cout << "Enter elements:\n";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin >> *(*(p + i) + j);
        }
    }

    for(int i = 0; i < 2; i++){
        sum += *(*(p + i) + i);
    }

    cout << "Diagonal sum = " << sum;

    return 0;
}