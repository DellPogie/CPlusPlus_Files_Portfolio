#include <iostream>
using namespace std;

struct person { 
    
    string name;
    int age;
    bool developer;
    
};

int	main (void) {

    person p1;
    person p2;

    p1.name = "DellPogie";
    p1.age = 30;
    p1.developer = true;

    p2.name = "MarioPogie";
    p2.age = 35;
    p2.developer = false;

    cout << p1.name << " (" << p1.age << ")" << endl;

    cout << p2.name << " (" << p2.age << ")" << endl;

    return 0;
    
}