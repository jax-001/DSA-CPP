#include<iostream>
using namespace std;

    
class Hero{
/* it will show 8 byte output, 4 (int) + 1 (char) + 1 (char) + 2 (padding)
    int health;
    char level;
    char grade;
*/  
    // Greedy alignment....
    // this will show 12 byte... 1(char) + 3 (padding) + 4 (int) + 1 (char) + 3 (padding)
    char level;
    int health;
    char grade;

    // float takes 4 byte for padding , but double takes 8 byte for padding...
};

int main(){
    Hero h1;
    cout << "Size : "<< sizeof(h1) << endl;
    return 0;
}




/*
    TAKE ATTENTION: 
    
    GREEDY ALIGNMENT: Greedy alignment refers to the compiler's strategy to align 
                      data members in a way that minimizes the number of padding bytes 
                      added while adhering to alignment constraints.
    
    PADDING: Padding refers to the extra unused memory inserted between class or 
                     struct members to ensure proper alignment. This alignment is 
                     determined by the data type with the largest alignment requirement 
                     within the class or struct.

*/