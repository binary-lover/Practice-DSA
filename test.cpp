#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    // Constructor
    Number(int n) {
        num = n;
    }

    // Member function that takes an object of the same class and another value
    void addValue( int value) {
        int result = num + value;
        cout << "Sum of " << num << " and " << value << " is: " << result << endl;
    }
};

int main() {
    // Creating two objects of the Number class
    Number num1(5);
    Number num2(10);

    // Calling the member function addValue() with an object and a value
    num2.addValue(7);

    return 0;
}
