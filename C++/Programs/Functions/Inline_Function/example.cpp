#include <iostream>

// Inline function definition
/*inline int add(int a, int b) {
    return a + b;
}*/
int add(int a, int b) {
    return a + b;
}


int main() {
    int x = 5;
    int y = 10;

    // Call the inline function
    int result = add(x, y);

    std::cout << "The sum of " << x << " and " << y << " is: " << result << std::endl;

    return 0;
}

