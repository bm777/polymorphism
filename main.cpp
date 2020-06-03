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
    vector<Vehicule*> listeVehicules;
    listeVehicules.push_back(new Voiture(1500, 5));
    listeVehicules.push_back(new Voiture(1200, 3));
    listeVehicules.push_back(new Moto(200, 212.0));

    return 0;
}
