#include <iostream>
using namespace std;
int main(){
    int x = 25;
    int *p = &x;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value of p (address of x): " << p << endl;
    cout << "Value pointed to by p: " << *p << endl;
    return 0;
}


// null pointer example
#include <iostream> 
using namespace std;
int main(){
    int *p = nullptr;
    if(p == nullptr){
        cout << "Pointer is null." << endl;
}}
// pointer to array example
#include <iostream>
using namespace std;
int main(){
    int arr[2] = {10, 20};
    int *p = arr; // points to the first element of the array
    cout << "First element: " << *p << endl; // 10
    return 0;
}


#include <iostream>
using namespace std;
int main(){
    int arr[3];
    cout << "Enter 3 integers: ";
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }
    cout <<"array elements are: ";  
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    return 0;
}