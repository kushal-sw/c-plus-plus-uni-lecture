
// #include <fstream>
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//   ifstream fin;
//   string line;
//   getline(fin, line);
//   cout << line << endl;

//   fin.close();
//   return 0;
// }
// #include <fstream>
// #include <iostream>
// using namespace std;
// int main() {
//   ifstream fin("data.txt");
//   if (!fin) {
//     cerr << "Error opening file." << endl;
//     return 1;
//   }

//   int number;
//   int sum = 0;
//   while (fin >> number) {
//     sum += number;
//   }

//   cout << "Sum of numbers in file: " << sum << endl;

//   fin.close();
//   return 0;
// }


#include <fstream>
#include <iostream>
using namespace std;
int main(){
    ifstream fin("matrix.txt");
    char ch;
    int count = 0;
    while(fin.get(ch)){
        count++;
    }
    cout<<"Total characters in file: "<<count<<endl;
    fin.close();

    return 0;
}