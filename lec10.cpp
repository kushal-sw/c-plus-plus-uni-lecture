// #include <iostream>
// using namespace std;
// class student 
// {
//     public:
//     int rollno;
//     string name;


//     void display()
//     {
//         cout << "roll no:" << rollno << endl;
//         cout << "name:"<< name << endl;


//     }
// };

// int main()
// {
//     student s1;

//     s1.rollno = 101;
//     s1.name = "kushal";
//     s1.display();
//     return 0;

// }





// #include <iostream>
// using namespace std;
// class book {
//     public:
//     int price ;
//     string name ;
//     string author;


//     void display()
//     {
//         cout << "title:" << name << endl;
//         cout << "author:" << author << endl;
//         cout << "price:" << price << endl;

//     }
// };

// int main(){
//     book s1;
//     s1.name = "😁 lodu khata";
//     s1.author = "👨🏿‍🦱 muthmare";
//     s1.price = 6969;
//     return 0;
// }

#include <iostream> 
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double getArea() const {
        return length * width;
    }
};

int main() {
    int length;
    cout << "enter length:" << endl;
    cin >> length;
    int width;
    cout << " enter width:" << endl;
    cin >> width;
    Rectangle rect(length, width);
    cout << "Area: " << rect.getArea() << endl;
    return 0;
}


