#include <iostream>
using namespace std;

int main() { 
    
    int n = 1;

    // pointers for n
    void* p1; // void-pointer
    int* p2; // int-pointer

    p1 = &n; // void pointer reference 'n'
    p2	= (int*) p1; //	int-pointer reference the void-pointer but type casted to int
    *p2 += 1; // increment the value where p2 is pointing to by 1

    cout << *p2	<< endl; //	points to the address of n, output will be identical below
    cout << n << endl;
    
    return 0;
    
}