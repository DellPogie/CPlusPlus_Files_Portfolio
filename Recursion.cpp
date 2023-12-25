#include <iostream> 
using namespace std;

int factorial (int number);

int main() {
    
    cout << "0! = " << factorial(0) << endl;
    cout << "1! = " << factorial(1) << endl;
    cout << "3! = " << factorial(3) << endl;
    cout << "5! = " << factorial(5) << endl;
    
    return 0;
    
}
 
int factorial (int number) {
    
    if (number > 1) {
        return number * factorial(number - 1);
    }
    else {
        return 1;
    }
}