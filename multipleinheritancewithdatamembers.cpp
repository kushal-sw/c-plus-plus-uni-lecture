#include<iostream>
using namespace std;
class sports {
    public:
    int score;
    sports() {
        cout << "enter score :" << endl;
        cin >> score;
    }
};
class academic {
    public:
     int marks ;
    academic() {
        cout << "enter grade " << endl;
        cin >> marks;
    }
};
class student : public sports, public academic {
    public:
    void total() {
        
        cout << "Total: " << (marks + score) << endl;
    }
};
int main() {
    student s;
    s.total();
    return 0;
}  
