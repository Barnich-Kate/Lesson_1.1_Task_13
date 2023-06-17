#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float Tf, Tc;
    cout<<"Type the temperature: ";
    cin >> Tf;
    Tc = (Tf - 32) * 5 / 9;
    cout << "Tc is equal:  " << Tc << endl;
    
    

    return 0;
}
