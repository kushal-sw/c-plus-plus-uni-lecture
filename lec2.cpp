#include <iostream>
using namespace std;

int main(){
int a , b ; 
    cout << "enter the first number:";
    cin >> a;

        cout << "enter second number:";
    cin >> b;
    if (a > b){
    cout << "greater number is " << a << endl;
    };
            if  (a < b){
        cout << "greater number is " << b << endl;
    }
    }


int main() {
int marks;
cout << "enter marks : ";
cin >> marks ;

string result = (marks >= 40) ? "pass" : "fail";
cout << "result:" << result;
}


int main(){
    int num;     cout << "enter number:";
cin >> num;
(num % 2 == 0) ? cout << "even number " : cout << "odd number";
return 0;
}

#include <iostream>
using namespace std;
int main() {
    int age, marks;
    cout << "enter your age :";
    cin >> age;

    cout<<"enter your marks:";
    cin >> marks;
if(age>=18 && marks >= 40){
    cout<<"result using AND(&&):eligible and passed"<<endl;

}else{
    cout<<"result uning and (&&): not eligable or failed"<<endl;
}
}