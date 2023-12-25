#include <iostream>
using namespace std;

class Point;
std::ostream & operator << ( std::ostream & out, const Point & c);

template <typename T>

void Swap(T & a, T & b) {
 
    T temp = b;
    b = a;
    a = temp;
    
}

class Point {
    
    public:
        
        int x, y;

        Point (int c1, int c2) { x = c1; y = c2;}
        Point & operator = (Point rhs) {
            x = rhs.x; y = rhs.y;
            return *this;
        }
        
};

int	main() {

    Point p1(5, 5), p2 (100, 100);
    Swap (p1, p2);
    cout << "p1: " << p1 << "p2: " << p2 << endl;
 
    return 0;
    
}

std::ostream & operator << (std::ostream & out, const Point & c) {
    
    out << "x:" << c.x << " ";
    out << "y:" << c.y << "\n";
    
    return out;

}