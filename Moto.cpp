#include <iostream>
#include "Moto.h"

using namespace std;

void Moto::show() const
{
    cout << "This is a motorcycle which can go up to " << m_vitesse << "km/h and which costs " << m_price << " euros." << endl;
}
Moto::~Moto()
{}
Moto::Moto(int price, double vitesse): Vehicule(price), m_vitesse(vitesse)
{}
int Moto::wheel() const
{
    return 2;
}

