#ifndef VEHICULE_H_INCLUDED
#define VEHICULE_H_INCLUDED

class Vehicule
{
    public:
    virtual void show() const;
    virtual ~Vehicule();
    Vehicule(int price);




    protected:
    int m_price;
};
#endif // VEHICULE_H_INCLUDED
