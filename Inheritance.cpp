#include <iostream>
using namespace std;

class Point;
std::ostream & operator << (std::ostream & out, const Point & c);
 
template <typename T>
void Swap(T & a, T & b) { T temp = a; a = b; b = temp; }

class Point { 
    
public:
    
    int x, y;

    Point (int c1, int c2) { x = c1; y = c2; } 
    Point & operator = (Point rhs) {
        x = rhs.x; y = rhs.y;
        return *this;
    }

};

class Complex : public Point { 
    
private:

    int &real, &imag;

public:
    Complex(int r, int	i) : Point (r, i), real (x), imag (y)
    { cout << "Forming..." << *this; }
};

int main() {

    Complex c1(15, 15), c2 (100, 100);
    
    return 0;
    
}

std::ostream & operator << (std::ostream & out, const Point & c) {
    
    out << "x:" << c.x << " ";
    out << "y:" << c.y << "\n"; 
    
    return out;

}