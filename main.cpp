#include <iostream>
#include "Vehicule.h"
#include "Voiture.h"
#include "Moto.h"
#include "Camion.h"
#include <vector>

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
    listeVehicules.push_back(new Camion(20000, 2.5));

    //We use the Voiture and Moto
    listeVehicules[0]->show();

    listeVehicules[2]->show();

    for(int i(0); i<listeVehicules.size(); ++i)
    {
        delete listeVehicules[i];   // release the i-th allocated memory case
        listeVehicules[i] = 0;      // We put the pointer at 0 to avoid issues
    }
    return 0;
}
