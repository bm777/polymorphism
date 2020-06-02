#include <iostream>
#include "Vehicule.h"
#include "Moto.h"

using namespace std;
void selfPresent(Vehicule v)
{
    v.show();
}

int main()
{
    cout << "----------------------------"<< endl;
    Vehicule v;
    selfPresent(v);

    Moto m;
   selfPresent(m);
    return 0;
}
