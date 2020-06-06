#include <iostream>
#include "Vehicule.h"

using namespace std;

 void Vehicule::show() const
 {
    cout << "This is a Vehicule which cost " << m_price << " euro." <<  endl;
 }
Vehicule::~Vehicule()
{
}
Vehicule::Vehicule(int price): m_price(price)
{}


