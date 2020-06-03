#include <iostream>
#include "Voiture.h"

using namespace std;


void Voiture::show() const
{
    cout << "This is a Voiture with " << m_doors << " doors and which costs " << m_price << " euro" << endl;
}
Voiture::~Voiture()
{
}
Voiture::Voiture(int price, int doors): Vehicule(price), m_doors(doors)
{}
