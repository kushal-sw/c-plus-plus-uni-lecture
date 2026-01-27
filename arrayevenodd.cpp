#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int key, found = 0;
    cout << "Enter key to search: ";
    cin >> key;
    for(int i = 0; i < 5; i++){
        if(arr[i] == key){
            found = 1;
            break;
        }
    }
    if(found)
        cout << "Key found in the array.";
    else
        cout << "Key not found in the array.";
}