#include <stdio.h>

typedef struct {
    
    char* name;
    int age;
    
} person;

void birthday (person * p);

void birthday (person * p) {
    
    p -> age++; 
    (*p).age++;
    
}

int main() {
    
    person DellPogie;
    DellPogie.name = "DellPogie";
    DellPogie.age = 30;

    printf("%s is %d years old.\n", DellPogie.name, DellPogie.age);

    birthday(&DellPogie);
    
    printf("Happy birthday! \n%s is now %d years old.\n", DellPogie.name, DellPogie.age);
 
    return 0;
    
}