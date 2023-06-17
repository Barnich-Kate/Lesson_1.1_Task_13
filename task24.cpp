#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout<<"Type number 1: ";
    cin >> a;
    cout<<"Type number 2: ";
    cin >> b;
    cout<<"Type number 3: ";
    cin >> c;
    c = a;
    b = c;
    b = a;
    cout << "Number: " << a << endl;
    cout << "Number: " << b << endl;
    cout << "Number: " << c << endl;
    
    

    return 0;
}
