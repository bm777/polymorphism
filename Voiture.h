#ifndef VOITURE_H_INCLUDED
#define VOITURE_H_INCLUDED
#incluce "Vehicule.h"

class Voiture public Vehicule
{
    public:
    void show() const;

    protected:
    int m_doors; // number of door in the vehicule
}
#endif // VOITURE_H_INCLUDED
