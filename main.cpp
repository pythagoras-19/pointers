//Notes on pointers
//
#include <iostream>
using namespace std;
void aHexFunction(int* aNumber)//catching an address (hence called aHexFunction) of an int
{
    cout << "In aHexFunction" << endl;
    cout << &aNumber << " " << aNumber << " " << *aNumber << endl;
   //address of aNumber, address of a, and value of aNumber which is value of integer value "a"
}
int main()
{
    int a = 2;
    cout <<"memory address of 'a': " << &a << endl;
    cout << "value of 'a': " << a << endl;

    int *b = &a; //b is a pointer to the address of a
    cout << "address of b: " << &b << "// address that b points to: " << b << "// value of b: " << *b <<  endl;
    int *c = &*b;
    cout << "address of c: " << &c << " // address that c points to: " << c << "//value of c: " << *c << endl;
    int **d = &b;
    cout << "address of d: " << &d << " // address that d points to: " << d << "//value of d: " << **d << endl;
    int ***e = &d;
    int ****f = &e;
    int *****g = &f;
    int ******h = &g;
    int *******i = &h;
    cout << "value of i: " << *******i << endl;


    aHexFunction(b);

    return 0;
}