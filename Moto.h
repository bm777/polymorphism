#ifndef MOTO_H_INCLUDED
#define MOTO_H_INCLUDED
#include "Vehicule.h"

class Moto : public Vehicule
{
    public:
    virtual void show() const;

    protected:
    double m_vitesse; // velocity of the motorcycle, in french
};

#endif // MOTO_H_INCLUDED
