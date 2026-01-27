#include <iostream>
using namespace std;
class ADD
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    float add(float a, float b)
    {
        return a + b;
    }
};
int main()
{
    ADD obj;
    cout << "Sum of 2 integers: " << obj.add(5, 10) << endl;
    cout << "Sum of 2 floats: " << obj.add(5.5f, 10.3f) << endl;
    return 0;
}