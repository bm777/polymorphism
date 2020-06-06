#ifndef CAMION_H_INCLUDED
#define CAMION_H_INCLUDED
#include "Vehicule.h"

class Camion: public Vehicule
{
    public:
        Camion(int price, double weight);
        ~Camion();
        void show() const;
        virtual int wheel() const;

    private:
        double m_weight;
};
#endif // CAMION_H_INCLUDED
