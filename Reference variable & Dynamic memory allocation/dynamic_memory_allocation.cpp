#include <iostream>
#include <cstdlib> // For malloc, free
using namespace std;

int main() {
    int* intPtr;
    void* voidPtr;

    // Allocate memory dynamically
    voidPtr = malloc(sizeof(int)); // Returns a void pointer
    if (voidPtr == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    // Cast void pointer to int pointer
    intPtr = static_cast<int*>(voidPtr);
    *intPtr = 100;

    cout << "Value: " << *intPtr << endl;

    // Free the allocated memory
    free(voidPtr);

    return 0;
}
