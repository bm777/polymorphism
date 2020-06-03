#include <iostream>
#include "Vehicule.h"
#include "Voiture.h"
#include "Moto.h"

using namespace std;
void selfPresent(Vehicule const& v)
{
    v.show();
}

int main()
{
    cout << "----------------------------"<< endl;
    Voiture *v;
    v = new Voiture(15000, 4);
    v->show();
    delete v;

    return 0;
}
