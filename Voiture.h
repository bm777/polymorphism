#ifndef VOITURE_H_INCLUDED
#define VOITURE_H_INCLUDED
#include "Vehicule.h"

class Voiture: public Vehicule
{
    public:
    Voiture(int price, int doors);
    virtual void show() const;
    virtual ~Voiture();
    virtual int wheel() const;

    protected:
    int m_doors; // number of door in the vehicule
};
#endif // VOITURE_H_INCLUDED
