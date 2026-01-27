// marks to result
#include <iostream>
using namespace std;
class Student {
   public:

   int roll_no;
   Student() {
       cout << "Enter roll number: ";
       cin >> roll_no;
   }
};

class marks : public Student {
   public:

   int mark1 , mark2 , mark3 , mark4 , mark5;
   marks() {
       cout << "Enter marks of math: ";
       cin >> mark1;
       cout << "Enter marks of science: ";
       cin >> mark2;
         cout << "Enter marks of english: "; 
         cin >> mark3;
            cout << "Enter marks of hindi: ";
            cin >> mark4;
               cout << "Enter marks of social science: ";
               cin >> mark5;
   }
};

class result : public marks {
   public:
   void display() {
       cout << "Roll No: " << roll_no << endl;
       cout << "total marks: " << mark1 + mark2 + mark3 + mark4 + mark5 << endl;
       cout << "percentage: " << (mark1 + mark2 + mark3 + mark4 + mark5) / 5.0 << "%" << endl;
    }
};
int main() {
   result res;
   res.display();
   return 0;
}