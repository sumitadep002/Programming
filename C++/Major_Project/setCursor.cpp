#include <iostream>
using namespace std;

void setCursorPosition(int x, int y) {
    cout << "\033[" << x << ";" << y << "H";
}

int main() { 

    setCursorPosition(5, 10);

    // Output text at the new cursor position
    cout << "Hello, world!" << endl;
    cout << "Hello, world!" << endl;

    // Reset the cursor position to a new location
    setCursorPosition(10, 20);
    cout << "New Position" << endl;
    cout << "New Position" <<endl;

    return 0;
}
