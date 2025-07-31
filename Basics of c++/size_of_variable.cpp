#include<iostream>
using namespace std;
int main(){
    int a = 234;
    float b = 23.53;
    char c = 'v';
    bool f = true;
    double d = 23.26;
    unsigned int u = -233;    // for positive number only...
    //cout<< u << endl;         // this will put some garbage value..

    //sizeof(n) is used to know the memory used in memory for perticular data type...
    int size1 = sizeof(a);
    int size2 = sizeof(b);
    int size3 = sizeof(c);
    int size4 = sizeof(f);
    int size5 = sizeof(d);
    int size6 = sizeof(u);

    cout<< "size of integer is: "  << size1 << endl;
    cout<< "size of float is: "    << size2 << endl;
    cout<< "size of character is: "<< size3 << endl;
    cout<< "size of bool is: "     << size4 << endl;
    cout<< "size of double is: "   << size5 << endl;
    cout<< "size of u_int is: "    << size6 << endl;

    //this works here also...
    //int n;
    // printf("Enter the number: ");
    // scanf("%d", &n);
    // printf("The number is: %d", n);
    return 0;
}