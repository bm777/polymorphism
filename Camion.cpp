#include <iostream>
#include "Camion.h"

using namespace std;

Camion::Camion(int price, double weight): Vehicule(price), m_weight(weight)
{}
Camion::~Camion()
{}
void Camion::show() const
{
    cout << "This is a Camion with " << m_weight << " t and it costs " << m_price << " euros" << endl;
}
int Camion::wheel() const
{
    return 6;
}
